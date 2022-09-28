#include<stdio.h>
int main()
{
	int ch;
	printf("Enter any carecter ....");
	scanf("%c",&ch);
	
	if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
	{
		printf("%c is Alphabet....",ch);
	}
	else
	{
		printf("Not Alphabet");
	}
}