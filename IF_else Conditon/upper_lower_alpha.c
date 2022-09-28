#include<stdio.h>
int main()
{
	int ch;
	printf("Enter Any Alphabet");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z')
	{
		printf("%c is lover case Alpahbet...",ch);
		
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("%c is Upper Case Alphabet...",ch);
	}
	
	return 0;
}