#include <stdio.h>
#include <string.h>

char* f(char* arr1, char* arr2) {
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int k = 0;
    int x = 0;
    
    int f = 0;
 for (int i = 0; i<len1; i++){
        for (int j = 0; j<len2; j++) {
            if (arr1[i]==arr2[j]){
             f += 1;
            }
            else if ((arr1[i] == ' ') && f!=0) {
             f = 0;
   }
  }
  if (f==len2) {
   x = i;
   //printf("%i", x);
   
  }  
    }
    int d = 0;
    for (int i = 0; i<len1; i++){
     if ((arr1[i] == ' ') && (i<x)) {
      d = i;
      //printf("%i", d);
  }
    }
 int s = 0;
 for (int i = 0; i<len1; i++){ 
     if ((i<=x) && (i>=d)) {
      //printf("%c", arr1[i]);
      continue; 
  }
  
  else {
   //printf("%c", arr1[s]);
   arr1[s++] = arr1[i];
   
  }                          
 }
  
    
 return arr1;
}                              

int main() {
    char arr1[] = "Hello mem me";
    char arr2[] = "mer";
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    f(arr1, arr2);
    for (int i = 0; i<(len1-len2-1); i++){
     printf("%c", arr1[i]);
    }
}
