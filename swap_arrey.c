#include<stdio.h>
int main()
{
	int a[3]={325,54,89},b[3]={20,879,17};
	int x,temp[3]={};
	for(x=0;x<3;x++)
	{
		temp[x]=a[x];
		a[x]=b[x];
		b[x]=temp[x];
	}
	for(x=0;x<3;x++)
	{
		printf("\n swap number a[%d]=%d",x,a[x]);
		
	}
	printf("\n");
	for(x=0;x<3;x++)
	{
		printf("\nswap number b[%d]=%d",x,b[x]);
		
	}
	return 0;
}