#include<stdio.h>
int main()
{
	int a,b,c,res;
	printf("enter any number");
	scanf("%d%d%d",&a,&b,&c);
	printf("\na=%d\nb=%d\nc=%d",a,b,c);
	res=(a>b&&a>c)?a:(b>c)?b:c;
	printf("\nPrint max number = %d",res);
	return 0;
}