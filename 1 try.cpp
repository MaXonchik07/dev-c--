#include <stdio.h>
#include<windows.h>

int main() 
{
char chars[] = "|/-\\";
int i, j;
for(i = 0, j = 0; i < 10000; i++)
{ 
fprintf(stderr, "%c", chars[j++]);
if(j == 5)
j = 0;
Sleep(1);
fprintf(stderr, "%c", 0x8);
}

return 0;
}
