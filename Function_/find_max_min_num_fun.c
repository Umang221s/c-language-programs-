#include<stdio.h>
int max(int n1 ,int n2)
{

	return (n1>n2)?n1:n2;
}

int min(int n1, int n2)
{
    
	
	return (n1>n2)?n2:n1 ;
}

int main()
{
	int n1,n2;
	
	
	printf("Enter any two number");
	scanf("%d%d",&n1,&n2);
	printf("max number is = %d\nmin number is = %d ",max(n1,n2),min(n1,n2));
	
	
	
}