#include<stdio.h>
int main()
{
	int unit;
	float charge,bill,total;
	printf("Enter number of unit : ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		bill=unit*0.50;
	}
	else if(unit<=150)
	{
		bill=25+((unit-50)*0.75);
	}
	else if(unit<=250)
	{
		bill=100+((unit-150)*1.20);		
	}
	else 
	{
		bill=220+((unit-250)*1.50);
		
	}
	charge=bill*0.20;
	total=charge+bill;
	printf("\nElectricity Bill = Rs. %.2f",total);
}