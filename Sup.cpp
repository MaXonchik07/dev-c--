#include"stdio.h"
int sup(int a){
	int b = a;
	int c = 0;
	int d;
	while(b > 0){
		d = b % 10;
		c = c * 10 + d;
		b /= 10;
	}
		return c;
}
	int main (){
		printf("%i", sup(123));
	}
