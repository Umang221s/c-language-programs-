#include<stdio.h>
int main()
{
	int ch;
	printf("Enter any charecter..");
	scanf("%c",&ch);
	
	if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
	{
		printf("\n%c is a Alphabet....",ch);
	}
	else if((ch>='0'&& ch<='500'))
	{
		printf("\n%d is a Digit.....",ch);
		
	}
	else
	{
		printf("\n%c is Special carecter...",ch);
	}
}