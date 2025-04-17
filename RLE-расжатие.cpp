#include "stdio.h"
void rleDecompress(char * file1){
	int count = 0;
	char c;
	char letter;
	char * file2 = "finpnews.tst";
    FILE * fp1 = fopen(file1, "r");
    FILE * fp2 = fopen(file2, "w");
    if(fp1){
    	while((fscanf(fp1, "%c", &c))!=EOF){
			if(count == 0){
				count = c - '0';		
				continue;
			}
			letter = c;
			while(count != 0){
				putc(letter, fp2);
				count-=1;
			}
		}
	}
	fclose(fp1);
    fclose(fp2);
}
int main(){
	rleDecompress("finpnew.tst");
}
