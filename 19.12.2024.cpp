#include <stdio.h>
#include <malloc.h>
int strlen(char* str){
	int len = 0;
	for(; str[len]!='\0'; len++);
	return len;
}
void TwoToTen(char* arr){
	int sres = 0;
	int fres = 0;
	int temp = 0;
	for(int i = 0; arr[i]!='\0'; i++){
		if(arr[i] == '1'){
			sres += 1;
			sres *= 10;
		}
		else if(arr[i] == '0'){
			sres *= 10;
		}
	}
	sres /= 10;
	for(int i = 0, j = 1; sres!=0; i++, j*=2){
		temp = sres%10;
		temp *= j;
		fres += temp;
		sres /= 10;
	}
	printf("%i", fres);
	free(arr);
}
int main(){
	TwoToTen("11011");
}
