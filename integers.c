#include<stdio.h>
int main()
{
int a;
printf("Enter the number");
scanf("%d",&a);
if(a>=1&&a<=100000)
{
  printf("POSITIVE");
}
else if(a<0)
{
  printf("NEGATIVE");
}
else if(a=0)
{
  printf("ZERO");
}
elseif(a>100000)
{
   printf("Beyond The Range");
}
else
{
 printf("Please Enter the Number");
}
}
