#include<stdio.h>
int main()
{
	char ope;
	float n1,n2,result=0.0f;
	
	printf("Wellcome To Simple Calculator :");
	printf("\n______________________________");
	printf("\nEnter [Number-1] [+,-,*,/]  [Number-2]  : ");
	
	scanf("%f%c%f",&n1,&ope,&n2);
	switch(ope)
	{
		case '+' :result=n1+n2;
		break;
		case '-' :result=n1-n2;
		break;
		case '/' :result=n1/n2;
		break;
		case '*' :result=n1*n2;
		break;
		
		default:
		printf("\nInvalid Operator......");
			
			
	}
	printf("\n%.2f%c%.2f = %.2f",n1,ope,n2,result);	
	return 0;
}