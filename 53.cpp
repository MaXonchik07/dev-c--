#include <stdio.h>
#include <locale.h>
#include<conio.h>
	int main()
	{
		char*locale = setlocale(LC_ALL, "");
		int c = 0;
		scanf("%i", &c);
		if(c > 0){
			printf("    ��     ��\n   x  x   x  x\n  x     x     x\n  x           x\n   x         x\n     x     x\n       x x"); 
	 		}
		 if(c < 0)
	 		printf(" ������ ���,\n  ����� ��� � �� �����,\n   ���� ��� ��� ���� ��������,\n    � � ��� ����� �� ����,\n     ����� ��� ����� �� ��� ����...");
	 	if(c == 0)
	 		printf("");
	}
