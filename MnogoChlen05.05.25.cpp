#include "stdio.h"
#include "malloc.h"
#include "math.h"
#define size 100
void createPoly(int** arr, int count, int num){
	int k;
	for(int i = 0; i < num; i++){
		scanf("%i", &k);
		arr[count-1][i] = k;
	}
}
void printPoly(int** arr, int count, int num){
	for(int i = 0; i < num; i++){
		if(arr[count-1][i] == 0){
			continue;
		}
		if(i == 0){
			printf("%i + ", arr[count-1][i]);
		}
		else{
			if(i == num-1){
				printf("%i*x^%i", arr[count-1][i], i);
			}
			else{
				if(arr[count-1][i+1] < 0){
					printf("%i*x^%i - ", abs(arr[count-1][i]), i);
				}
				
				else{
					printf("%i*x^%i + ", abs(arr[count-1][i]), i);
				}
			}
		}
	}
}
int sumPoly(int** arr, int count1, int count2, int num1, int num2){
	int maxNum;
	int mainCount;
	if(num1>=num2){
		maxNum = num1;
	}
	else{
		maxNum = num2;
	}
	for(int j = count2; j < size; j++){
		for(int i = 0; i < size; i++){
			if(arr[j][i]!=0){
				break;
			}
			if(i==size-1){
				mainCount = j;
			}
		}
		if(mainCount!=0){
			break;
		}
	}
	for(int i = 0; i < maxNum; i++){
		arr[mainCount][i] += (arr[count1-1][i] + arr[count2-1][i]);
	}
	return mainCount+1;
}
int multiPoly(int** arr, int count1, int count2, int num1, int num2){
	int mainCount;
	for(int j = count2; j < size; j++){
		for(int i = 0; i < size; i++){
			if(arr[j][i]!=0){
				break;
			}
			if(i==size-1){
				mainCount = j;
			}
		}
		if(mainCount!=0){
			break;
		}
	}
	for(int i = 0; i < num1; i++){
		for(int j = 0; j < num2; j++){
			if(arr[count1-1][i] == 0){
				i++;
			}
			else if(arr[count2-1][j] == 0){
				continue;
			}
			else{
				arr[mainCount][i+j] += (arr[count1-1][i] * arr[count2-1][j]);
			}
		}
	}
	return mainCount+1;
}

int main(){
	int** space = (int**)malloc(sizeof(int*)*size);
	for(int i = 0; i < size; i++){
		space[i] = (int*)malloc(sizeof(int)*size);
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			space[i][j] = 0;
		}
	}
	
	
	for(int i = 0; i < size; i++){
		free(space[i]);
	}
	free(space);

}
