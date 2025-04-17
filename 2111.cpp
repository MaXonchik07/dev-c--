#include <stdio.h>
int main() 
{
 int n = 0, x = 0;
 int res = 0; 
 printf("write X: ");
 scanf("%i", &x);
 printf("write N: ");
 scanf("%i", &n);
 n = n<<1;
 while(x!=0) {
 	if(x&1)
 		res += n;
	x>>1;
	n<<=1;
 }
	printf("A = %i", res);	
}
