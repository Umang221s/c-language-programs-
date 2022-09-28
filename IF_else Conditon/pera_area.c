#include<stdio.h>
int main()
{
	int height,width,perameter,area;
	printf("Enter height and width");
	scanf("%d %d",&height,&width);	
	printf("height = %d\nwidth = %d",height,width);
	
	perameter=2*(height+width);
	printf("\nperameter of rectangle = %d inchs",perameter);
	
	area=height+width;
	printf("\nArea of rectangel = %d inchs",area);
	
	
	
}