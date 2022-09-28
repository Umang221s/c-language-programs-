#include<stdio.h>
int main()
{
	int a,x,m=9,sum=1;
	printf("enter number");
	scanf("%d",&a);
	for(x=1;x<=a;x++)
{
	sum=sum+m;
    printf("%d   ",m);
	m=m*10+9;
}	
	printf("sum = %d",sum);
	return 0;
}