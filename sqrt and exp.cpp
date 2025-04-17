#include "stdio.h"
#include "math.h"
char sqrtP(char* arr, int i){
	char sqrt[4] = "s"; 
	for(i; arr[i] < '0' || arr[i] > '9'; i++){
		if(arr[i] == 'q'){
			sqrt[1] = 'q';
		} 
		else if(arr[i] == 'r'){
			if(sqrt[1] == 'q'){
				sqrt[2] = 'r';
			}
			else{
				continue;
			}
		}
		else if(arr[i] == 't'){
			if(sqrt[2] == 'r'){
				sqrt[3] = 't';
				return sqrt[3];
			}
		}
		else{
			continue;
		}
	}
}

char expP(char* arr, int i){
	char exp[3] = "e"; 
	for(i; arr[i] < '0' || arr[i] > '9'; i++){
		if(arr[i] == 'x'){
			exp[1] = 'x';
		} 
		else if(arr[i] == 'p'){
			if(exp[1] == 'x'){
				exp[2] = 'p';
				return exp[2];
			}
			else{
				continue;
			}
		}
		else{
			continue;
		}
	}
}


int main(){
	float res;
	float temp = 0;
	float temp1 = 0;
	float temp2 = 0;
	char func;
	int count = 1;
	int flag12 = 0;
	int flag2 = 0;
	int flag1 = 0;
	char arr[30] = "sqrt(25*3) + eppxqrp(14/3)"; 
}
