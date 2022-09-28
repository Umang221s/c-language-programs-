#include<stdio.h>
int main()
{
	int a,b;
	char res;
	printf("Enter any two value\n");
	scanf("%d%d",&a,&b);
	res= (a>b && b>a)?   't' : 'f' ;
	printf("max value = %c",res);
	return 0;
}