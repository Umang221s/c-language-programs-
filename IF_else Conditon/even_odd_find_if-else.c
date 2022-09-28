#include<stdio.h>
int main()
{
	int x;
	printf("Enter any int Number :");
	scanf("%d",&x);
	
	if(x%2==0)
	{
		printf("%d is odd Number ",x);
	}
	else
	{
		printf("%d is even Number",x);
	}
}