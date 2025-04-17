#include "stdio.h"
void Qsort(int* arr, int start, int end){
	if(start > end)
		return;
	int i = start;
	int j = end;
	int tmp;
	int mid = arr[(start+end)/2];
	for(i; i <= j;){
		for(i; arr[i] < mid; i++);
		for(j; arr[j] > mid; j--);
		if(i <= j){
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	Qsort(arr, i, end);
	Qsort(arr, start, j);
}

int main(){
	int n = 9;
	int arr[n] = {4,2,1,6,3,7,2,9,0};
	for(int i = 0; i < n; i++){
		printf("%i, ", arr[i]);
	}
	printf("\n");
	Qsort(arr, 0, 8);
	for(int i = 0; i < n; i++){
		printf("%i, ", arr[i]);
	}
}
