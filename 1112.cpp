#include"stdio.h"
#include"conio.h"
int main()
{
	int a, b;
	scanf("%i%i", &a, &b);
	int mid = (a + b)/2;
	int IsFind = 0;
	while(a<=b){
		printf("it's = %i\n", mid);
		char userInput = getche();
		if (userInput == '='){
			printf("yey");
			IsFind = 1;
			break;
	}
		if(userInput == '>'){
			a = mid + 1;
	}
		else if(userInput == '<'){
			b = mid - 1;
	}
	mid = (a + b)/2;
	}
	if(IsFind == 0){
		printf("number is not found");
	}
}

