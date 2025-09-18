#include "stdio.h"
int findNum(char *file, int num){
	char c;
	int tmp = num;
	int size;
	int count = 1;
	for(size = 0; tmp != 0; size++)tmp/=10;
	char arr[size];
	for(int i = size; i!=0; i--){
		arr[i-1] = num%10+'0';
		num/=10;
	}
	FILE * f = fopen(file, "r");
	if(f){
		while((c=getc(f))!=EOF){
			if(c==arr[0]){
				if(size == 1){
					return 1;
				}
				else{
					while((c=getc(f))!=EOF){
						if(arr[count]==c){
							count++;
							if(count==size){
								return 1;
							}
						}
						else{
							break;
						}
					}
				}
			}		
		}
	}
	fclose(f);
	return 0;
}
