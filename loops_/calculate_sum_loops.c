#include<stdio.h>
int main()
{
	int n,x,sum=0;
	printf("Enter Any Number :");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++)
	{
		printf("%d ",x);
		sum=sum+x;
	}
	
	printf("\nSum of all Number = %d",sum);
}