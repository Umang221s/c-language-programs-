#include<stdio.h>
int main()
{
	int num[30],size,x,odd[30],even[30],e=0,o=0;
	printf("Enter size of arrey :");
	scanf("%d",&size);	
		for(x=0;x<size;x++)
	{
		scanf("%d",&num[x]);	
	}
	for(x=0;x<size;x++)
	{
		if(num[x]%2==0)
		{
			even[e]=num[x];
			e++;
		}		
			else
		{
			odd[o]=num[x];
			o++;
		}
		
	}	
		printf("Even = ");
		for(x=0;x<e;x++)
	{
		printf("%d ",even[x]);	
	}
	    printf("\nodd = ");
		for(x=0;x<o;x++)
	{
		printf(" %d",odd[x]);	
	}
    

	return 0;
}
	
