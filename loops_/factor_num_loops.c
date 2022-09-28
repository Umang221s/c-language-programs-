#include<stdio.h>
int main()
{
	int num,i;
	
	printf("Enter any Number to find its Factor :");
	scanf("%d",&num);
	
	printf("All Factors of %d are :",num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}