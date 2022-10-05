#include<stdio.h>
int main()
{
	int x[10],n;
	
	printf("Enter Any 10 Number Input :");
	
	for(n=0;n<10;n++)
	{
		scanf("%d",&x[n]);
	}
	
	
	
		for(n=0;n<10;n++)
	{
	    printf("%d  ",x[n]);
	}
	
	printf("\n\n");
	
	
	for(n=9;n>0;n--)
	{
		printf("%d  ",x[n]);
		
	}
	
	
	return 0;
	
}