#include<stdio.h>
int main()
{
	int x;
	printf("Enter any year ....");
	scanf("%d",&x);
	
	if(x%4==0)
	{
		printf("\nThis is a leap Year...%d",x);
	}
	else
	{
		printf("\nThis is not leap year");
		
	}
}