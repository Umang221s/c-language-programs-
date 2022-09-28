#include<stdio.h>
int main()
{
	int km,li;
	float average;
	printf("Enter the kilometer :");
	scanf("%d",&km);
	printf("Enter fuel spend in liters :");
	scanf("%d",&li);
	average=km/li;
	printf("Average km/liter = %.3f",average);
	
	
	
	return 0;
	
	
}