#include<stdio.h>
int main()
{
	int x;
	char result;
	scanf("%d",&x);
	result=(x%4==0) ? 'e':'o';
	printf("result = %c ",result);
	
	return 0;
}