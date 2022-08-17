#include<stdio.h>
int main()
{
	int A,B,C,sum;
	printf("press any 2 keys");
	scanf("%d%d%d",&A,&B,&C);
	printf("%d=A\n%d=B\n%d=C",A,B,C);
	sum=A+B+C;
	printf("\n%d+%d+%d=%d",A,B,C,sum);
}