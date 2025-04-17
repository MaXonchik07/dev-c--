#include "stdio.h"
void sort(int* arr, int size){
	int temp;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int* first3Min(int *arr, int size){
	int arrNew[3];
	for(int i = 0; i < 3; i++){
		arrNew[i] = arr[i];
	}
	sort(arrNew, 3);
	if(size > 3){
		for(int i = 3; i < size; i++){
			if(arrNew[0] >= arr[i]){
				arrNew[2] = arrNew[1];
				arrNew[1] = arrNew[0];
				arrNew[0] = arr[i];
			}
			else if(arrNew[1] >= arr[i]){
				arrNew[2] = arrNew[1];
				arrNew[1] = arr[i];
			}
			else if(arrNew[2] >= arr[i]){
				arrNew[2] = arr[i];
			}
		}
		return arrNew;	
	}
	else
		return arr;
}

