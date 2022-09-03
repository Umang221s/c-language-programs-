#include<stdio.h>
int main()
{
	int i,m,x,sum_e=0,sum_o=0;
	printf("Enter any Numbers");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		printf("%d ",i);
    }
		
		for(x=1;x<=m;x++)
	{
		if(x%2==0)
		{
			printf("even = %d ",x);
		//	sum_e+=x;
		}
		if(x%2!=0)
		{
			printf("\nodd = %d ",x);
			//sum_o+=x;
		}
		sum_e=
		
		printf("\nsum of even = %d",sum_e);
		printf("\nsum of odd = %d",sum_o);
	}

	
	return 0;
}
