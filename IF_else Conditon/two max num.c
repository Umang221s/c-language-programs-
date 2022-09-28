#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter any Two value");
	scanf("%d%d",&x,&y);
	
	if(x>y)
	{
		printf("Max Num = %d",x);
		
	}
	else
	{
		printf("Max num = %d",y);
	}
	
	return 0;
}