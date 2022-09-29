#include<stdio.h>

int even_odd(int num)
{
	
	return (num%2!=0);

}

int main()
{
	int num;
	printf("enter any number :");
	scanf("%d",&num);
	if(even_odd(num))
	{
		printf("This Number is Even");
	
	}
	else
	{
		printf("this number is odd");
	}
	
}