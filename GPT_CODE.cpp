#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void fileCopy(char *file1, char* file2) {
    char c;
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "w");
    
    if (f1 == NULL || f2 == NULL) {
        perror("Error opening file");
        return;
    }

    while ((c = getc(f1)) != EOF) {
        putc(c, f2);
    }

    fclose(f1);
    fclose(f2);
}

void file_copy(char *file1, char* file2, char* arr) {
    char c;
    int i = 0;
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "w");

    if (f1 == NULL || f2 == NULL) {
        perror("Error opening file");
        return;
    }

    while ((c = getc(f1)) != EOF) {
        if (c == '\n') {
            if (arr[i] == '0') {
                i++;
            } else if (arr[i] == '1') {
                fprintf(f2, " ");
                i++;
            }
        }
        fprintf(f2, "%c", c);
    }

    fclose(f1);
    fclose(f2);
}

void reverse(char* arr) {    
    int len = strlen(arr);
    char temp;
    
    for (int i = 0; i < len / 2; i++) {				  	
        temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

void encode(char* file1, char* file2) {
    int num;
    char c;
    char *file3 = "res.txt";
    char *tmpFile = "tmp.txt";
    
    // Выделяем память под символьный массив
    char* sym = (char*)malloc(9 * sizeof(char)); // 8 бит + 1 для '\0'
    
    if (sym == NULL) {
        perror("Memory allocation failed");
        return;
    }

    FILE *f2 = fopen(file2, "r");
    
    if (f2 == NULL) {
        perror("Error opening file");
        free(sym);
        return;
    }

    FILE *f3 = fopen(file3, "w");
    
    if (f3 == NULL) {
        perror("Error opening file");
        fclose(f2);
        free(sym);
        return;
    }

   // Начинаем кодирование
   while ((c = fgetc(f2)) != EOF) {
       for (int i = 0; i < 8; i++) {
           sym[i] = '0';
       }
       sym[8] = '\0';
       num = c;

       for (int i = 0; num != 0; i++) {
           sym[i] = (num % 2) + '0';
           num /= 2;
       }
       reverse(sym);

       // Печатаем двоичное представление символа
       printf("%s\n", sym);

       // Копируем файлы
       if (ftell(f3) == 0) { // Если файл пустой
           file_copy(file1, file3, sym);
       } else {
           file_copy(file3, tmpFile, sym);
           fileCopy(tmpFile, file3);
       }
   }

   fclose(f3);
   fclose(f2);
   remove(tmpFile); // Удаляем временный файл
   free(sym); // Освобождаем память
}

int main() {
   encode("file1.txt", "file2.txt");
   return 0;
}
