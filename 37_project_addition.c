#include<stdio.h>
int sum(int a ,int b)
{
return a+b;
}
int sub(int a ,int b)
{
return a-b;
}
int mult(int a ,int b)
{
return a*b;
}
int divi(int a ,int b)
{
return a/b;
}

int main()
{
    int choice,f,s;
    char x;
	printf("------------MENU-------------\n\n");
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Divition\n");
	do{
	
	printf("\nPlease Enter Your Choice :");
	scanf("%d",&choice);
	printf("\nEnter First Number :");
	scanf("%d",&f);
	printf("Enter Second Number :");
	scanf("%d",&s);
	
	
	
    switch(choice)
	{
		case 1: printf("Addition = %d\n",sum(f,s));
		break;
		
		case 2: printf("Substraction = %d\n",sub(f,s));
		break;
		
		case 3: printf("Multiplication = %d\n",mult(f,s));
		break;
		
		case 4: printf("Divition = %d\n",divi(f,s));
		break;
		

		default:
		printf("\nInvalid choice...!");
		
		}
		
		printf("\nDo You Want to Continue......Enter 'Y' or 'N'.......");
		scanf("%s",&x);
		
}
    while(x=='Y'&& x=='y'||x!='N'&& x!='n');

    
    
			
	return 0;		
}
