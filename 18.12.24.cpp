#include"stdio.h"
#include"malloc.h"
void fibonachi(int a){
	int count = 0;
	int temp = 0;
	int temp1 = 1;
	int temp2 = 1;
	int res = 0;
	for(; count<a; count++){
		temp += temp1;
		res += -temp1 + temp;
		printf("%i ", res);
		temp1 += temp; 
	}
}
int main(){
	fibonachi(4);
}
