#include<stdio.h>
int main()
{
	int x,y,z,result;
	printf("Enter three number input");
	scanf("%d%d%d",&x,&y,&z);
	result=(x>y && x>z)? x:(y>z)?y:z;
	printf("max value of three is = %d",result);
	
	return 0;
}