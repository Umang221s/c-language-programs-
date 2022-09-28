#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number :");
	scanf("%d",&a);
	
	if(0<a)
	{
		printf("%d is positive number",a);
	}
	else if(0>a)
	{
		printf("%d is negetive number",a);
	}
	else
	{
		printf("%d is zero",a);
	}
	
}