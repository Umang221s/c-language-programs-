#include<stdio.h>
int main()
{
	int a,b,c,i,result;
	
	printf("Enter Any Number of terms :");
	scanf("%d",&result);
	
		a=0;
		b=1;
		c=0;
	printf("Fibonacci Term : \n");
	
	for (i=1;i<=result;i++)
	{
		printf("%d, ",c);
		
		a=b;
		b=c;
		c=a+b;
	}	
	
	return 0;
}