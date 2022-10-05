#include<stdio.h>
int main()
{
	int arr[1000],size,i,max1,max2,int_min;
	
	printf("Enter Size Of The Array (1 - 1000)");
	scanf("%d",&size);
	
	printf("Enter Elements in the array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max1=max2=int_min;
	
	for(i=1;i<size;i++)
	{
		if(arr[i]>max1)
		{
		
		max2=max1;
		max1=arr[i];
	    }
	    else if(arr[i]>max2 && arr[i]>max1)
	    {
	    	max2=arr[i];
		}
	}
	
	
	printf("First Largest Value is = %d\n",max1);
	printf("Secound Largest Value is = %d\n",max2);
	
	
	return 0;
}