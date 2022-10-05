#include<stdio.h>
int main()
{
	int arr[100],i,size,even=0,odd=0;
	
	printf("Enter size of the Array :");
	scanf("%d",&size);
	
	printf("Enter %d elements in Array :",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	
	printf("Total Even Number Elements are = %d\n",even);
	printf("Total Odd Number Elements are = %d",odd);
	
}