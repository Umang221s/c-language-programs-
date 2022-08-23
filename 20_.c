#include<stdio.h>
int main()
{
	int weight_1,item_1,total_1,weight_2,item_2,total_2;
	float average,itotal,gtotal;
	printf("Enter number of item and weight");
	scanf("%d%d",&item_1,&weight_1);
	printf("Num of item is = %d\nOne items weight is = %d",item_1,weight_1);
	total_1=item_1*weight_1;
    printf("\nTotal value = %d\n",total_1);
    
    printf("\nEnter number of item and weight");
	scanf("%d%d",&item_2,&weight_2);
	printf("Num of item is = %d\nOne items weight is = %d",item_2,weight_2);
	total_2=item_2*weight_2;
    printf("\nTotal value = %d\n",total_2);
    
    itotal=item_1+item_2;
    gtotal=total_1+total_2;
    average=gtotal/itotal;
    printf("\nAverage value = %.3f",average);
    
    return 0;
}