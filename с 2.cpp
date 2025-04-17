
#include "stdio.h"
int main()
	{
		int a;
		printf("Enter number: ");
		scanf("%d", &a);
		if (a == 1 | a == 2 | a == 3 | a == 5 | a ==7)
		{
		printf("simple");
		}
		else if(a)
		{
		printf(a % 2 == 0 | a % 3 == 0 | a % 5 == 0 | a % 7 == 0 ? "not simple" : "simple");
		}
		else
		{
		printf("Error");
		}
	}
