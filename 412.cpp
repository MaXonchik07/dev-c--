#include"stdio.h"
int main(){
	int i = 1;
	int s;
	while(i < 3){
		s += i;
		++i;
	}
	printf("s = %i", s);
}
