#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two Number Find Max Number :");
	scanf("%d%d",&n1,&n2);
	
	switch(n1>n2)
	{
		case 0:printf("Maximum NUmber is = %d",n2);
		break;
		case 1:printf("maximum Number is = %d",n1);
		break;
	}
	return 0;
}