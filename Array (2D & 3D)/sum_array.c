#include<stdio.h>
int main()
{
	int x[6],sum=0,sum1=1,a;
	printf("Enter any six value : ");
	for(a=0;a<6;a++)
	{
		scanf("%d",&x[a]);
		
		
		sum=sum+x[a];
		sum1=sum1*x[a];
		
	}
	printf("\nsum of all 6 value is --> %d\n",sum);
	
	printf("\nMulti of all 6 value is --> %d",sum1);
	
	
	
	return 0;
}