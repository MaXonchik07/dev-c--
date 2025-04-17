#include <stdio.h>
#include <locale.h>
#include<conio.h>
	int main()
	{
		char*locale = setlocale(LC_ALL, "");
		int c = 0;
		scanf("%i", &c);
		if(c > 0){
			printf("    хх     хх\n   x  x   x  x\n  x     x     x\n  x           x\n   x         x\n     x     x\n       x x"); 
	 		}
		 if(c < 0)
	 		printf(" Каждый раз,\n  Когда иду я по улице,\n   Меня там ждёт этот понъсьер,\n    И я так долго не могу,\n     Спать под луной на зло ночи...");
	 	if(c == 0)
	 		printf("");
	}
