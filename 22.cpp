#include "stdio.h"
#include "locale.h"
int main()
	{
		char * locale = setlocale(LC_ALL, "");
		char operation;
		int a = 0;
		int b = 0;
		printf("������� ������ �����: ");
		scanf("%d", &a);
		printf("������� ������ �����: ");
		scanf("%d", &b);
		printf("�������� ��������:\n1)+\n2)-\n3)*\n4)/\n��������� ��������: ");
		scanf("%d", &operation);	
		switch(operation)
		{
			case 1 : printf("a + b = %i", a + b);
			break;
			case 2 : printf("a - b = %i", a - b);
			break;
			case 3 : printf("a * b = %i", a * b);
			break;
			case 4 : printf("a / b = %i", a / b);
			break;
			default:
				printf("������");
		}
	return 0;
	}	
