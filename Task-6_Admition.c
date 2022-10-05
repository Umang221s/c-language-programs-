#include<stdio.h>
int main()
{
	float cf,fc,f,c;
	char choice,cho;
	
	do{
		printf("Enter Your Choice :");
		scanf("%s",&cho);
		
		switch(cho)
		{
			case'1':
			printf("\nEnter Temperature to Convert Celsius to Fahrenhit :\n");
			scanf("%f",&c);
			cf=(c*9/5)+32;
			printf("Enter Temperature to Convert Celsius to Fahrenhit is = %f\n",cf);
			break;
			
			
			case'2':
			printf("\nEnter Temperature to Convert Celsius to Fahrenhit :\n");
			scanf("%f",&f);
			fc=((f-32)*5)/9;
			printf("Enter Temperature to Convert Celsius to Fahrenhit is = %f\n",fc);
			break;
			
			default:printf("\nTHANK YOU :>\n");
		}
		
		printf("\nWould You Like To Countinue[YES / NO] :");
		scanf("%c",&choice);
		
	}
	while(choice=='y' || choice=='Y' && choice=='n' || choice=='N');
	
	return 0;
}