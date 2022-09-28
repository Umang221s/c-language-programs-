#include<stdio.h>
int main()
{
	int sp,cp,sum,sum1;
	printf("Enter (Cost Price) and (Selling Price) :");
	scanf("%d%d",&cp,&sp);
	sum=sp-cp;
	sum1=cp-sp;
	
	if(sp>cp)
	{
		printf("You are Profit = %d",sum);
	}
	else if(cp>sp)
	{
		printf("You losssss...... = %d",sum1);
	}
	else
	{
		printf("No Profit and No Loss....");
	}
}