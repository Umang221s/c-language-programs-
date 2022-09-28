#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("Enter Any Number And Find Factorial :");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	
	printf("\nFirst %d Number factorial is : %d",num,fact);
	
	return 0; 
}