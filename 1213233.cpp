#include <stdio.h>
#include <malloc.h>
#include <string.h>

char* f(char* arr1, char* arr2) {
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int k = 0;
    
    char* arr = (char*)malloc(len1+1);
    int f = 0;
 	for (int i = 0; i<len1; i++){
  	int f = 0;
        for (int j = 0; j<len2; j++) {
            if (arr1[i]==arr2[j]){
             f = 1;
             break;
            }
  } 
  if (f==0) {
   arr[k]=arr1[i];
//   printf("%c ", arr[k]);
   k++;
   
  }
   
     
      
     
 }
 arr[k] = '\0';
 arr = (char*)realloc(arr, k+1);
 //printf("%s", arr);
 return arr;
}

                                    

int main() {
    
    char arr1[] = "ABDEFCGHIJ";
    char arr2[] = "ABCF";
    
    char* res = f(arr1, arr2);
    printf("%s", res);
	
    
    
}
