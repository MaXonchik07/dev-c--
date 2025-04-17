#include <stdio.h>
void print_person(char* name, int age)
{
    printf("Name: %s \t Age: %d \n", name, age);
}
void print_product(char* title, int price)
{
    printf("Title: %s \t Price: %d \n", title, price);
}
  
int main(void)
{
	void(*bruh)(char*, int);
	bruh = print_person;
	bruh("Marr", 10);
	bruh("MarrYY", 61);
	bruh("ALEx", 52);
	void(*oh)(char*, int);
	oh = print_product;
	oh("banana", 100);
	oh("coconut", 1870);
	return 0;
}
