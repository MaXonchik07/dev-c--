#include "stdio.h"
int main()
{
	const int Cry = 20;
	int cry [Cry];
	int i = 0;
	for(i; i < Cry; i+=3){
		cry[i] = i + 1;
			printf("%i\n", cry[i]);
		cry[i+1] = (i + 2) * (i + 2);
			printf("%i\n", cry[i+1]);
		cry[i+2] = (i + 3) * 2;
			printf("%i\n", cry[i+2]);
	}
}
