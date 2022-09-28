#include<stdio.h>
int main()
{
	int x,a,sum=0;
	printf("Enter number of odd ");
	scanf("%d",&x);
	for(a=1;a<=x;a++)
	{
		printf("%d ",2*a);
		sum=sum+(2*a);
		
	}
	printf("\n%d",sum);
}