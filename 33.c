#include <stdio.h>
#include<string.h>
int main()
{
char str[100];
int count=0,i;
printf("enter the string:");
gets(str);
{
if(str[i] == ' ')
count++;
}
printf("%d",count);
return 0;
}
