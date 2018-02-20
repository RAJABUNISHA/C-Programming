#include <stdio.h>
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
   else if(a>100000)
   {
   	printf("BEYOND THE RANGE");
   }
   else
   {
   	printf(" Invalid key . Enter the Number");
   }
   return 0;
}
   
	
