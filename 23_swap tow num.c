#include<stdio.h>
int main()
{
	int x=89,y=46;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("x = %d\ny = %d",x,y);
	
	return 0;
}