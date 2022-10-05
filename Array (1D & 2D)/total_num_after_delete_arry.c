#include<stdio.h>
int main()
{
	int arr[100],i,size,pos;
	
	printf("Enter Size of Array :");
	scanf("%d",&size);
	
	printf("Enter %d Elements of the Array :",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter The Element Position To Delate this Element :");
	scanf("%d",&pos);
	
	if(pos<0 || pos>size)
	{
		printf("Invalid Position...! Pleace Enter Position Between 1 to %d",size);
		
	}
	else
	{
		for(i=pos-1;i<size-1;i++)
		{
		   arr[i]=arr[i+1];	
		}
		size--;
		printf("\nElements of Array After Delete Are :");
		for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
	}
	
	return 0;
}