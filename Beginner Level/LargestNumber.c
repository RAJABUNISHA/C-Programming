#include <stdio.h>
int main() 
{
	int a,b,c;
	printf("Enter the Numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		{
			if(a>c)
			{
			    printf("A is Largest Number");	
			}
			else
			{
				printf("C is Largest Number");
			}
		}
	}	
		else
		{
			if(b>c)
			{
				printf("B is Largest Number");
			}
			else
			{
				printf("C is Largest Number");
			}
		}
	return 0;
}
