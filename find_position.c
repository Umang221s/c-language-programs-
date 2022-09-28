#include<stdio.h>
int main()
{
	int a[50],x,size,value;
	
	printf("Enter Your size :");
	scanf("%d",&size);
	for(x=0;x<size;x++)
	{
		scanf("%d",&a[x]);
	}
	printf("Enter your value : ");
	scanf("%d",&value);
	for(x=0;x<size;x++)
	{
		if(a[x]==value)
		{
			printf("\nThis value position is = %d",x);
		}
	}
	
	return 0;
}