#include<stdio.h>
int main()
{
	int x,num,sum=1;
	printf("Enter Any Number");
	scanf("%d",&num);
	for(x=1;x<=num;x++)
	{
		sum=sum+x;
		printf("%d\n",x);
		
	}
	printf("sum of All num is = %d",sum);
}