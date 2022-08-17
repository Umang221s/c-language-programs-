#include<stdio.h>
int main()
{
//	int A,B,C;
    float A,B,C;
	char value;
	scanf("%f\n%f\n%f",&A,&B,&C);
	value=(A>0)?'T':'F';
	printf("\n%c",value);
	value=(B<0)?'T':'F';
	printf("\n%c",value);
	value=(C>0)?'T':'F';
	printf("\n%c",value);
	
	return 0;
}