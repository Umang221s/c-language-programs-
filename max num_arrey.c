#include<stdio.h>
int main()
{
	int num[30],size,x,max,min;
	printf("Enter size of arrey :");
	scanf("%d",&size);	
		for(x=0;x<size;x++)
	{
		scanf("%d",&num[x]);	
	}
	max=num[0];
	min=num[0];
	for(x=0;x<size;x++)
	{
		if(num[x]>max)
		{
			max=num[x];
		}		
			if(num[x]<min)
		{
			min=num[x];
		}
	}	
	printf("Maximum Number is == %d\n",max);
	printf("Minimum Number is == %d\n",min);

	return 0;
}
	
