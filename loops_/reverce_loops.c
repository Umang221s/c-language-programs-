#include<stdio.h>
int main()
{
	int num,result=0,rev;
	
	printf("Enter Any number to reverce :");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rev=num%10;
		num=num/10;
		result=result*10+rev;
		
	}
	printf("Reverce Number is = %d",result);
	
	return 0;
	
}