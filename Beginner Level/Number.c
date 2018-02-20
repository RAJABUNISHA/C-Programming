#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n>=1&&n<=100000)
	{
		if(n%2==0)
		{
			printf("EVEN");
		}
        else
        {
        	printf("ODD");
        }
	}
	else
	{
		printf("INVALID KEY");
	}
	return 0;
}
