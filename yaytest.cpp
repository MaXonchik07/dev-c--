#include <stdio.h>
#include <malloc.h>
char* del(char* arr){
	int lenmin = 0;
	int index;
	int count1 = 0;
	int count2 = 0;
	for(int i = 0; arr[i]!='\0'; i++){
		if(arr[i]!=' '){
			count1++;
		}
		else if(arr[i] == ' '){
			if(lenmin == 0){
				lenmin = count1;
				index = i+1;
			}
			count2 = count1;
			count1 = 0;
			i+=1;
		}
		else if(lenmin!=0){
			if(lenmin > count2){
				lenmin = count2;
			}
		}
	printf("count2 = %i\n lenmin = %i", count2, lenmin);
	}
}
int main(){
	char arr[20] = "hey hello my friend";
	del(arr);
}
