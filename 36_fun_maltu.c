#include<stdio.h>
int funda(int f1,int f2)
{
	int sum,sum1,sum2,sum3;
	sum=f1-f2;
	printf("sum of f1-f2 = %d",sum);
	sum1=f1+f2;
	printf("\nsum of f1+f2 = %d",sum1);
	sum2=f1*f2;
	printf("\nsum of f1*f2 = %d",sum2);
	sum3=f1/f2;
	printf("\nsum of f1/f2 = %d",sum3);
}
int main()
{
	int a,b;
	printf("Enter any two value :");
	scanf("%d%d",&a,&b);
	funda(a,b);
	
}