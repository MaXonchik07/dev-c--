#include "stdio.h"
void Wv(char *file, int w){
	char c;
	char c1;
	int count = 0;
	
	int flag = 0;
	char * tmpfile = "tmp.txt";
	FILE * f1 = fopen(file, "r");
	FILE * f2 = fopen(tmpfile, "w");
	if(f1){
		while((c=getc(f1))!=EOF){
			if(flag!=1){
				while((c1=getc(f1))!='\n'){	
					count+=1;
					if(c1>='À' && c1 <='ï' || c1 >= 'ð' && c1 <= 'ÿ'){
						count-=1;
					}
					flag = 1;
				}
				rewind(f1);		
			}
			fprintf(f2, "%c", c);
//			if(count == 2*(w)){
//				fprintf(f2, "\n");
//				count = 0;
//			}
//			printf("c = %c\n", c);
		}
		printf("count = %i, ", count);
	}
//	remove("tmp.txt");
	fclose(f1);
	fclose(f2);
}

int main(){
	Wv("test.txt", 57);
}
