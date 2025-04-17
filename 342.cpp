//#include "stdio.h"
//int main()
//{
//	int X;
//	scanf("%i", &X);
//	printf("P = %i", X * 4);
//}
//#include <stdio.h>
//int main() 
//{
// int n = 0, x = 0;
// int res = 0; 
// printf("write X: ");
// scanf("%i", &x);
// printf("write N: ");
// scanf("%i", &n);
// n = n<<1;
// while (x!=0) {
//  if (x&1) {
//   res += n;
//  }
//  x>>=1;
//  n<<=1;
// }
// printf("The answer: %i\n", res);
//}
//#include "stdio.h"
//#include "math.h"
//int main()
//{
//	int X, a, b;
//	scanf("%i", &X);
//	a = X/10;
//	b = X%10;
//	if(X > 9 && X < 100 || X > -100 && X < -9)
//		printf("%i", abs(a)+ abs(b));
//	else
//		printf("-1");
//}
//#include "stdio.h"
//int main()
//{
//	int a, b, c;
//	int max;
//	int mid;
//	int min;
//	scanf("%i%i%i", &a, &b, &c);
//	max = a;
//	mid = b;
//	min = c;
//	if(b >= c && b >= a)
//		max = b;
//	if(c >= a && c >= b)
//		max = c;
//	if(c >= a && c <= b || c <= a && c >= b)
//		mid = c;
//	if(a <= b && a >= c || a >= c && a <= b)
//		mid = a;
//	if(b <= a && b <= c)
//		min = b;
//	if(a <= b && a <= c)
//		min = a;
//	printf("%i%i%i", max, mid, min);
//}
