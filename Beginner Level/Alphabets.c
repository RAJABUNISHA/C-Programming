#include <stdio.h>
int main() 
{
	char ch;
	printf("Enter the Character");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
              {
	    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	     {
	     	printf("VOWEL");
	     }
	    else
	    {
	    	printf("CONSONANTS");
	    }
    }
    if(ch>='0'&&ch<='9')
    {
    	printf("NUMBERS");
    }
	return 0;
}
