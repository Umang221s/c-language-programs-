#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three Number : ");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y&&x>z)
	{
		printf(" Max num = %d",x);
	}
		else if(y>z)
		{
			printf("Max num =%d",y);
		}
	else
	{
		printf("Max num = %d",z);
	}
}