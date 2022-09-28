#include<stdio.h>
int main()
{
	int x,y;
	char result;
	printf("Enter any two value");
	scanf("%d%d",&x,&y);
	result=(x>y || y>x)? 'T':'F';
	printf("number is = %c",result);
    return 0;
}