#include "stdio.h"
int main(){ 
	int n = 2312321;
	int arr[10] = {0};
	int last;
	while(n!=0){
		int last = n%10;
		arr[last]++;
		n/=10;
	}
	for(int i = 0;i < 10; i++){
		printf("arr[%i] = %i\n", i, arr[i]);
	}
	int max = arr[0];
	for(int i=0; i<10; i++){
		if(max<arr[i]){
			max++;
		}
	}
	int count = 0;
	for(int i=0; i<10; i++){
		if(max == arr[i]){
			count++;
		}
	}
	int maxItems[count];
	for(int i=0, j=0; i<10; i++){
		if(arr[i]==max){
			maxItems[j++] = i;
		}
	}
	for(int i = 0; i<count; i++){
		printf("max = %i\n", maxItems[i]);
	}


}
