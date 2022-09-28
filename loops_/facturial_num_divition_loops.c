#include<stdio.h>
int main()
{
	int u,m,sum=1;
	
	printf("Enter Any Number");
	scanf("%d",&u);
	
	for(m=1;m<=u;m++)
	{
		sum=sum*m;		
	}
	printf("%d",sum);
	return 0;
}