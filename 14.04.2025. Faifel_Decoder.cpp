#include "stdio.h"
#include "malloc.h"
#include "string.h"
void fileCopy(char *file1, char* file2){
	char c;
	FILE * f1 = fopen(file1, "r"); 
    FILE * f2 = fopen(file2, "w");   
    if(f2){
    	while((c=getc(f1))!=EOF){
    		fprintf(f2, "%c", c);
		}
	}
	fclose(f1); 
    fclose(f2);
}
void file_copy(char *file1, char* file2, char* arr){
	char c;
	int i = 0;
	FILE * f1 = fopen(file1, "r"); 
    FILE * f2 = fopen(file2, "w");  
    if(f2){
    	while((c=getc(f1))!=EOF){
    		if(c == '\n'){
    			if(arr[i] == '0'){
					i++;
				}
				else if(arr[i] == '1'){
					fprintf(f2, " ", arr[i]);
					i++;
				}
			}
    		fprintf(f2, "%c", c);
		}
	}
	fclose(f1); 
    fclose(f2);
}
char* reverse(char* arr){	
	int len = strlen(arr)-1;
	char temp;
	for(int i = 0; i < len; i++){				  	
		temp = arr[i];
		arr[i] = arr[len];
		arr[len] = temp;
		len-=1;		
	}
}
void encode(char*file1, char*file2){
	int num;
	int count = 0;
	char c;
	char * file3 = "res.txt";
	char * tmpFile = "tmp.txt";
	char* sym = (char*)malloc(9*sizeof(char));
	FILE * f1 = fopen(file1, "r");
	FILE * f2 = fopen(file2, "r");
	FILE * f3 = fopen(file3, "w");
	FILE * ft = fopen(tmpFile, "w");
	if(f2){
		while((c = fgetc(f2))!=EOF){
			for(int i = 0; i<8; i++){
				sym[i] = '0';
			}
			sym[8] = '\0';
			num = c;
			for(int i = 0; num != 0; i++){
				sym[i] = (num%2) + '0';
				num/=2;
			}
			reverse(sym);
			for(int i = 0; i<8; i++)
				printf("%c", sym[i]);
			printf("\n");
			if(f3 && count == 0){
				file_copy(file1, file3, sym);
				count = 1;
			}
			else{
				file_copy(file3, tmpFile, sym);
				fileCopy(tmpFile, file3);
					
			}
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	fclose(ft);
	remove("tmp.txt");
	free(sym);
}

int main(){
	encode("file1.txt", "file2.txt");
}
