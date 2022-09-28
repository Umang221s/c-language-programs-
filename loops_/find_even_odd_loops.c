#include<stdio.h>
int main()
{
	int n,x,sum;
	
	printf("enter any number  ");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		printf("%d\n",x*2-1);
		sum=x*2-1;
		
	}
	printf("%d :%d",n,sum);
		
	return 0;
}