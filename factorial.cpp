#include "stdio.h"
float fact(float a){
	int b = 1;
	for(int i = 1; i <= a; i++){
		b*=i;
	}	
	return b;
}

int main(){
	printf("b = %f", fact(4));
}
