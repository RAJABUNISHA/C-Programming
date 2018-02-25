#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%400==0)
    {
    	printf("yes");
    }
    else if(year%100==0)
    {
    	printf("no");
    }
    else if(year%4==0)
    {
    	printf("yes");
    }
    else
    {
       printf("no");
    }   
   return 0;
}
