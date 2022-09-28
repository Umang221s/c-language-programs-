#include<stdio.h>
int main()
{
	int week;
	printf("Enter number (1 to 7) :");
	scanf("%d",&week);
	
	if(week==1)
	{
		printf("MONDAY");
	}
	else if(week==2)
	{
		printf("TUSDAY");
	}
		else if(week==3)
	{
		printf("WEDNESDAY");
	}
		else if(week==4)
	{
		printf("THURSDAY");
	}
		else if(week==5)
	{
		printf("FRIDAY");
	}
		else if(week==6)
	{
		printf("SATURDAY");
	}
		else if(week==7)
	{
		printf("SUNDAY");
	}
	else
	{
		printf("Invalid input.... Please Enter Valid Number....(1 to 7)");
	}
}