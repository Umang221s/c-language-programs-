#include<stdio.h>
int main()
{
	int x,y,z,sum;
	printf("Enter 3 Number for Triangle");
	scanf("%d%d%d",&x,&y,&z);
	
	sum=x+y+z;
	
	if(sum==180&&x>0&&y>0&&z>0)
	{
		printf("The Triangle Is Valid");
	}
	else
	{
		printf("Not Posible Triangle");
	}
}