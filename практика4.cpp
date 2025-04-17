#include "stdio.h"
int main(){
//	Транспонирование матрицы №1
//	int N, M;
//	scanf("%i%i",&N, &M);
//	int arr[N][M];
//	int arr1[N][M];
//	int k = 1;
//	for(int i = 0; i<N; i++){
//		for(int j = 0; j<M; j++){
//			arr[i][j] = k;
//			k++;
//			printf("%i ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for(int i = 0; i<M; i++){
//		for(int j = 0; j<N; j++){
//			arr1[i][j] = arr[j][i];
//			printf("%i ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	Удалить первое слово №2
//	char str[20] = "hello world";
//	puts(str);
//	for(int i = 0;str[i]>='A' && str[i]<='z'; i++){
//			str[i] = ' ';
//		}
//	puts(str);
//	Вставка слово в начало строки №3
//	char str[100] = "world";
//	char str1[10] = "hello";
//	int len = 0;
//	int len1 = 0;
//	puts(str);
//	while(str[len]!='\0'){
//		len++;
//	}
//	while(str1[len1]!='\0'){
//		len1++;
//	}
//	for(int i = len;i<=len+len1 ;i++){
//		if(str[i]=='\0'){
//			str[i] = ' ';
//			str[i+1] = '\0';
//		}
//	}
//	for(int i = 0;i<len; i++){
//		str[len1+i+1] = str[i];
//	}
//	for(int i = 0; i<len1; i++){
//		str[i] = str1[i];
//	}
//	puts(str);
//	Сортировка массива по возрастанию №4
	int temp;
	int arr[5] = {3, 5, 1, 7, 2};
	for(int i = 0; i < 5; i++){
		for(int j = i; j < 5; j++){
			if(arr[j] < arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0; i < 5; i++){
		printf("%i ", arr[i]);
	}
}

