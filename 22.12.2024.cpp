#include <stdio.h>
#include <malloc.h>
int strlen(char* arr){
	int len = 0;
	for(len = 0; arr[len]!='\0'; len++);
	return len;
}
void Func(char* arr1, char* arr2){ 
	int count = 1;
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	for(int i = 0; i < len1; i++){
		for(int j = 0; j < len2){
			if(arr1[i] == arr2[j]){
				while(arr2!='\0'){
					count++;
					if(arr2)	
				}
			}
		}
	}
}
int main(){
	
}

