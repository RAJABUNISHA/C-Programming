#include <stdio.h>
int main() 
{
	char c;
	printf("Enter the Alphabet");
	scanf("%c",&c);
	if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
	  {
	  	 printf("Alphabet");
	  }
	else if(c>='0'&&c<='9') 
	  {
	  	printf("NUMBER");
	  }
	  else
	  {
	  	printf("SPECIAL CHARACTER");
	  }
	return 0;
}
