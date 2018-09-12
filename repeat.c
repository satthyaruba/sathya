#include <stdio.h>
#include<string.h>
int main()
{
    char str[30];
int n,i;
printf("enter the string");
scanf("%s",&str);
printf("enter the no of times to print the string");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("%s\n",str);
  }
    return 0;
}
