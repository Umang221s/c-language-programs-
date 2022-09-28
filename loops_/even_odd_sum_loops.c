#include<stdio.h>
int main()
{
	int x,n,sum=0,sum1=0;
	printf("Enter Any 1 to n number");
	scanf("%d",&n);
	printf("\n.....Even num.....");
	for(x=1;x<=n;x++)
	{	
		if(x%2==0)
		{
			printf("\n%d",x);
			sum=sum+x;
		}				
	}
	printf("\nSum of all Even Number =  %d\n",sum);
	printf("\n.....odd num.....");
	for(x=1;x<=n;x++)
	{
		if(x%2!=0)
		{
			printf("\n%d",x);
			sum1=sum1+x;
		}
	}
	printf("\nSum of all odd Number =  %d",sum1);

	return 0;
	
}