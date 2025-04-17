#include "stdio.h"
#include "malloc.h"
int main(){
	int num;
	int count = 0;
	char c;
	char* sym = (char*)malloc(8*sizeof(char));
	FILE * f1 = fopen("file1.txt", "r");
	FILE * f2 = fopen("file2.txt", "r");
//	FILE * f3 = fopen(file3, "w");
//	FILE * ft = fopen(tmpFile, "w");
	if(f2){
		while((c = fgetc(f2))!=EOF){
			if(c == feof(f2)){
				return 1;
			}
			printf("c = %c", c);
//			for(int i = 0; i<8; i++){
//				sym[i] = '0';
//			}
//			sym[8] = '\0';
//			num = c;
//			for(int i = 0; num != 0; i++){
//				sym[i] = (num%2) + '0';
//				num/=2;
//			}
//			for(int i = 0; sym[i]!='\0'; i++){
//				printf("%c", sym[i]);
//			}
			printf("\n");
		}
	}
	fclose(f1);
	fclose(f2);
}
