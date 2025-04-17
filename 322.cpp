#include "stdio.h"
#include "locale.h"
int main()
	{
	char*locale = setlocale(LC_ALL, "");
	int a = 0, b = 0, c =0;
	scanf("%i\n", &a);
	scanf("%i\n", &b);
	scanf("%i", &c);
	if (a > b && a > c)
	printf("%iНаибольшее число: ", a);
	else if (b > a && b > c)
	printf("%iНаибольшее число: ", b);
	else (c > a && c > b);
	printf("Наибольшее число: %i", c);
	}
