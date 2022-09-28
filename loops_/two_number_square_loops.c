#include<stdio.h>
int main()
{
	int x,y,z=1,i;
	
	printf("Enter Any Number for Base :");
	scanf("%d",&x);
	printf("Enter Any Number for Exponent :");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++)
	{
		z=z*x;
	}
	
	printf("%d^%d=%d",x,y,z);
}