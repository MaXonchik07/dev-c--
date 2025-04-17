#include <stdio.h>
#include <stdlib.h>
 
 file_copy(char *file1, char* file2)
{
    int num;
    int size = 1;
    FILE * f1 = fopen(file1, "r"); 
    FILE * f2 = fopen(file2, "w");
    char buffer[size]; 
	while(num = fread(buffer, sizeof(char), size, f1) > 0) 
    {	
        fwrite(buffer, sizeof(char), num, f2);
    }
    fclose(f1); 
    fclose(f2);
}
    
int main(void)
{
    file_copy("file1.txt", "res.txt"); 
    return 0;
}
