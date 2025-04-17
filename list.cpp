#include "stdio.h"
void createList(int a, int* arr1, int* arr){						
	int i = 0;
	if(arr[i] == 0 && arr[i+1] == 0){
		arr[i] = i;
		arr[i+1] = a - 1;
		arr1[a-1] = NULL;
	}
	else{
		for(i = 1; arr[i]!=0; i++);
		if(arr[i]==0){
			arr[i] = arr[i-1] + 1;
			arr[i+1] = arr[i-1] + a;
		}
	}
	arr[1] = 1;
	FILE * file = fopen("list.txt", "wb");
	if(file){
		for(int i = 0; i <= arr[1]; i++){
			if(arr1[i] == 0){
				continue;
			}
			else{
				fwrite(&arr1[i], 1, sizeof(arr1[i]), file);
			}
		}
	}
	fclose(file);
}
void addAtStart(int count, int num, int* arr1, int* arr2){
	if(arr1[0] == 0 && arr1[1] == 0){
		for(int i = 0; i <= arr2[1]; i++){
			arr1[i] = arr1[i+2];
		}
	arr2[1]-=2;
	}
	for(int i = arr2[1]; i >= 0; i--){
		arr1[i+1] = arr1[i];
	}
	arr1[0] = num;
	arr2[1] += 1;
	FILE * file = fopen("list.txt", "wb");
	if(file){
		for(int i = 0; i <= arr2[1]; i++){
			fwrite(&arr1[i], 1, sizeof(arr1[i]), file);
			fprintf(file, ",");
		}
	}
	fclose(file);
}
void addAtEnd(int count, int num, int* arr1, int* arr2){
	FILE * file = fopen("list.txt", "wb");
	if(file){
		arr1[arr2[1]+1] = num;
		arr2[1] += 1;
		for(int i = 0; i <=	 arr2[1]; i++){
			if(arr1[i] == 0){
				continue;
			}
			else{
				fwrite(&arr1[i], 1, sizeof(arr1[i]), file);
				fprintf(file, ",");
			}
		}
		fclose(file);
	}
}
void addAfterNum(int numv, int num, int* arr1, int* arr2){
	int temp = 0;
	for(temp; arr1[temp] != numv; temp++);
	if(arr1[temp] == numv){
		for(int j = arr2[1]+1; j > temp+1 ; j--){
			arr1[j] = arr1[j-1];
		}
		arr1[temp+1] = num;
		arr2[1]+=1;
	}
	FILE * file = fopen("list.txt", "wb");
	if(file){
		for(int i = 0; i <=	 arr2[1]; i++){	
			if(arr1[i] == 0){
				continue;
			}
			else{
				fwrite(&arr1[i], 1, sizeof(arr1[i]), file);
				fprintf(file, ",");
			}
		}
	}
	fclose(file);
}
void printList(int count, int* arr1, int* arr2){
	count = (count*2)-1;
	for(int i = arr2[count-1]; i <= arr2[count]; i++){
			printf("%i, ", arr1[i]);		
	}
}
void deleteAtStart(int* arr1, int* arr2){
	if(arr1[0]==0 && arr1[1]==0){
		for(int i = 0; i <= arr2[1]; i++){
			arr1[i] = arr1[i+2];
		}	
	arr2[1]-=2;
	}
	for(int i = 0; i<=arr2[1]; i++){
		arr1[i] = arr1[i+1];
	}
	arr2[1] -= 1;
	FILE * file = fopen("list.txt", "wb");
	if(file){
		for(int i = 0; i <= arr2[1]; i++){
			fwrite(&arr1[i], 1, sizeof(arr1[i]), file);
			fprintf(file, ",");	
		}
	}
	fclose(file);
}
void deleteAtEnd(int* arr1, int* arr2){
	arr1[arr2[1]] = 0;
	arr2[1] -= 1;
	FILE * file = fopen("list.txt", "wb");
	if(file){
		for(int i = 0; i <= arr2[1]; i++){
			fwrite(&arr1[i], 1, sizeof(arr1[i]), file);
			fprintf(file, ",");	
		}
	}
	fclose(file);
}
void deleteAfterNum(int num, int* arr1, int* arr2){
	int temp;
	for(temp = 0; arr1[temp]!= num; temp++);
	if(arr1[temp] == num){
		temp+=1;
		for(int j = temp; j <= arr2[1]; j++){
			arr1[j] = arr1[j+1];
		}
	}	
	arr2[1] -= 1;
	FILE * file = fopen("list.txt", "wb");
	if(file){	
		for(int i = 0; i <= arr2[1]; i++){
			fprintf(file, "%i", arr1[i]);
			fprintf(file, ",");	
		}
	}
	fclose(file);
}
void SortMin(int* arr1, int* arr2){
	int end = arr2[1];
	int temp;
	for(int i = 0; i < end; i++){
		for(int j = i; j < end; j++){
			if(arr1[i] >= arr1[j]){
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;	
			}
		}
	}
	for(int i = 0; i < end; i++){
		arr1[i] = arr1[i+2];
	}
	arr2[1] -= 2;
}
void SortMax(int* arr1, int* arr2){
	int end = arr2[1];
	int temp;
	for(int i = 0; i < end; i++){
		for(int j = i; j < end; j++){
			if(arr1[j] >= arr1[i]){
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}
}

int main(){
	int arrList[10000];
	int arrCoordinat[2];
	createList(2, arrList, arrCoordinat);
	addAtEnd(1, 15, arrList, arrCoordinat);
	addAtEnd(1, 654, arrList, arrCoordinat);
	addAtEnd(1, 99, arrList, arrCoordinat);
	addAtStart(1, 98, arrList, arrCoordinat);
	addAtStart(1, 754, arrList, arrCoordinat);
	deleteAfterNum(98, arrList, arrCoordinat);
	addAfterNum(98, 13941, arrList, arrCoordinat);
	addAfterNum(98, 72, arrList, arrCoordinat);
	printf("arrCoor = %i\n", arrCoordinat[1]);
	for(int i = 0; i < 20; i++){
		printf("%i, ", arrList[i]);
	}
}
