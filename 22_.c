#include<stdio.h>
int main()
{
	char choice;
	int num1,num2;
	printf("enter your operation: ");
	scanf("%c",&choice);
	
	printf("Enter two int numbers: ");
	scanf("%d %d",&num1,&num2);
	
	switch(choice)
	{
		case '+': printf("Sum of %d and %d = %d",num1,num2,num1+num2);
		break;
		
		case '-': printf("Subtraction of %d and %d = %d",num1,num2,num1-num2);
		break;
		
		case '*': printf("Multiplication of %d and %d = %d",num1,num2,num1*num2);
		break;		
		
		case '/': printf("Divison of %d and %d = %d",num1,num2,num1/num2);
		break;
		
		case '%': printf("Mod of %d and %d = %d",num1,num2,num1%num2);
		break;
		
		default:
			printf("Invalid operation...!");
		
	}
	return 0;
}

