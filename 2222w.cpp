#include "stdio.h"
int rec(int* arr, int n){
	if(n == 0){
		return arr[0];
	}
	else{	
		return arr[0] + rec(arr+1, n-1);
	}
}

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	printf("%i", rec(arr, 3));
	
}
