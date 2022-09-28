#include<stdio.h>
int main()
{
	int n,first,last,sum;
	printf("Enter Any Value :");
	scanf("%d",&n);
	
	first=n;
	last=n%10;
	
	while(first>=10)
	{
		first=first/10;
	}
	sum=first+last;
	printf("First Digit = %d",first);
	printf("\nLast Digit = %d",last);
	printf("\nSum of first and last value = %d",sum);
}