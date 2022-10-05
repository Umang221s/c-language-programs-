#include<stdio.h>
int main()
{
	int arr[100],i,j,size,k;
	
	printf("Enter size of array :");
	scanf("%d",&size);
	
	printf("Enter Elements of Array :");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<size-1;k++)
				{
					arr[k]==arr[k+1];
				}
				size--;
				j--;
			}
			
		}
	}
		
		printf("\nArrey Element After Delete Duplicate Number :");
		for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
		
		return 0;
}