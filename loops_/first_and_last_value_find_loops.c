#include<stdio.h>
int main()
{
	int n,first,last;
	printf("Enter any number :");
	scanf("%d",&n);
	
	first=n;
	last=n%10;
	while(first>=10)
	{
		first=first/10;
	}
	printf("First digit = %d",first);
	printf("\nLast digit = %d",last);
	
	
	return 0;
}
