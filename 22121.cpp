#include "stdio.h"
int main(){
//	char str[100] = "abababa";
//	char str2[] = "aba";
//	int count = 0;
//	for(int i = 0, j = 0; str[i]!='\0'; i++){
//		if(str[i] == str2[0]){
//			j = 0;
//		 	for(;str2[j]!='\0'; j++){
//			 	if(str[i+j] != str2[j])
//			 		break;
//			 	}	
//			if(str2[j] == '\0')
//			count++;
//		}
//	}
//	printf("%i", count);
//	char str3[100] = "HHHHeeeey yoooo";
//	char str4[100] = "what's ur naame&&&";
//	int j = 0;
//	int i = 0;
//	int len = 0;
//	int len1 = 0;
//	for(len1; str4[len1]!='\0'; len1++);
//	for(len; str3[len]!='\0'; len++);
//	for(i; i<len+1 ;i++){
//		printf("%i\n", i);
// 		if(str3[i] == '\0'){
//			str3[len+len1+2] = '\0';
//			for(i, j ;str4[j]!='\0' ; j++, i++){
//				str3[i] = str4[j];
//			}
//		}
//	}
//	puts(str3);
//	printf("%i %i", i, j);
	char str5[100] = "Hiiii yeaaa";
	int len = 0;
	for(len; str5[len]!='\0'; len++);
	str5[len+2] = '\0';
	for(len; len>-1; len--){
		str5[len+1] =str5[len];
	}
	str5[0] = '!';
	puts(str5);

}
