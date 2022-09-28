#include<stdio.h>
int main()
{
	int month;
	printf("Enter month Number (1 to 12) :");
	scanf("%d",&month);
	
	switch(month)
	{
	case 1:printf("January - 31 Days");
	break;
	case 2:printf("February - (28 and 29 Days");
	break;
	case 3:printf("March - 31 Days");
	break;
	case 4:printf("April - 30 Days");
	break;
	case 5:printf("May - 31 Days");
	break;
	case 6:printf("June - 30 Days");
	break;
	case 7:printf("July - 31 Days");
	break;
	case 8:printf("Auguast - 30 Days");
	break;
	case 9:printf("September - 31 Days");
	break;
	case 10:printf("October - 30 Days");
	break;
	case 11:printf("Nevember - 31 Days");
	break;
	case 12:printf("Desember - 30 Days");
	break;
	
	default:printf("Invalid Month Number....!");
	}
}