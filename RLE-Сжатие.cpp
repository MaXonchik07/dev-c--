#include "stdio.h"
void rleCompress(char * file1){
    int count = 0;
	char c;
	char current;
	char last;
	char * file2 = "finpNew.tst";
    FILE * fp1 = fopen(file1, "r");
    FILE * fp2 = fopen(file2, "w");
    if(fp1){
        while((c=getc(fp1))!=EOF){
            current = c;
            if(last == current){
            	count+=1;
			}
        	else{
        		if(count != 0){
					fprintf(fp2, "%i", count);
					putc(last, fp2);
        			count = 0;
				}
        		last = current;
        		count+=1;
			}
		}
        if(count!=0){
        	fprintf(fp2, "%i", count);
			putc(last, fp2);
       		count = 0;
		}
		fclose(fp1);
        fclose(fp2);
    }
}
int main(){
	rleCompress("finp.tst");
}
