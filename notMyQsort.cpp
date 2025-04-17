#include <stdio.h>
void qsort (int* arr,int b, int e)

{
  int tmp;
  int l = b, r = e;
  int piv = arr[(l + r) / 2];
  while (l <= r)
  {

    while (arr[l] < piv)\
      l++;

    while (arr[r] > piv)
      r--;
    if (l <= r){
      tmp = arr[l++];
	  arr[l++] = arr[r--];
	  arr[r--] = tmp;
	}
  }

  if (b < r)

    qsort (arr, b, r);

  if (e > l)

    qsort (arr, l, e);

}    
int main(){
	int n = 9;
	int arr[n] = {2,5,1,6,3,7,9,1,0};
	qsort(arr, 0, n-1);
	for(int i = 0; i < n; i++){
		printf("arr[%i] = %i\n", i, arr[i]);
	}	
}
