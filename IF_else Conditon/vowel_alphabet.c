#include<stdio.h>
int main()
{
	int ch;
	printf("Enter Any alphabet");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'&&ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n%c is vowel Alphabet",ch);
		
	}
	else if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
	{
		printf("\n%c is constant Alphabet",ch);
		
	}
	else
	{
		printf("\nThis is Not Alphabet...");
	}
	
}