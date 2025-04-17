#include "stdio.h"
#include "malloc.h"
#include "string.h"

char* reverse(char* arr) {
    int len = strlen(arr) - 1;
    char temp;
    for (int i = 0; i < len; i++) {
        temp = arr[i];
        arr[i] = arr[len];
        arr[len] = temp;
        len -= 1;
    }
    return arr; 
}

void encode(char* file1, char* file2) {
    int num;
    char c;
    char* sym = (char*)malloc(9 * sizeof(char)); 
    FILE *f1 = fopen(file1, "a");
    FILE *f2 = fopen(file2, "r");

    if (f2) {
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

            printf("it's = %c\n", c);
            printf("%s\n", sym); 
        }
    }

    fclose(f1);
    fclose(f2);
    free(sym);
}
int main(){
	encode("file1.txt", "file2.txt");
}
