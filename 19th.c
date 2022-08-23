#include <stdio.h>
 
int main()
{
    int ndays, year, week, days,x=7; 
    printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    week =(ndays % 365) /x;
    days =(ndays % 365) %x;
    printf ("Number of day = %d\nyear = %d\nweek = %d\ndays = %d",ndays, year, week, days);
    
	return 0;            
}