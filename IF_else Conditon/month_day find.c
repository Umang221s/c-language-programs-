#include<stdio.h>
int main()
{
	int month;
	printf("Enter number (1 to 12) :");
	scanf("%d",&month);
	
	if(month==1)
	{
		printf("January = 31 Days");
	}
	else if(month==2)
	{
		printf("Fabruary = 28 & 29 Days");
	}
		else if(month==3)
	{
		printf("March = 31 Days");
	}
		else if(month==4)
	{
		printf("April = 30 Days");
	}
		else if(month==5)
	{
		printf("May = 31 Days");
	}
		else if(month==6)
	{
		printf("June = 30 Days");
	}
		else if(month==7)
	{
		printf("July = 31 Days");
	}
		else if(month==8)
	{
		printf("Auguast = 30 Days");
	}
		else if(month==9)
	{
		printf("September = 31 Days");
	}
		else if(month==10)
	{
		printf("October = 30 Days");
	}
		else if(month==11)
	{
		printf("November = 31 Days");
	}
		else if(month==12)
	{
		printf("Desember = 30 Days");
	}
	
	else
	{
		printf("Invalid Number .....");
	}
	
	return 0;
}