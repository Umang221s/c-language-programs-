#include<stdio.h>
int cube(int sum ,int num)
{
	
	sum=num*num*num;
	
	return 0;
}


int main()
{
	int n;
	
	printf("Enter Any Number");
	scanf("%d",&n);
	
	
	printf("cube is = %d",cube(n));
	return 0;
}