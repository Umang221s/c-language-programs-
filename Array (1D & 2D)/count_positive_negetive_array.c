#include<stdio.h>
int main()
{
	int arr[100],i,size,count=0,count1=0;
	
	printf("Enter size of the Array :");
	scanf("%d",&size);
	
	printf("Enter %d elements in Array :",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(arr[i]<0)
		{
		   count++;
		}
		else
		{
			count1++;
		}
	
	}
	
	printf("Total Negetive Number Elements are = %d\n",count);
	printf("Total positive Number Elements are = %d\n",count1);
	
}