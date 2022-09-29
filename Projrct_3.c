#include<stdio.h>
int pizza(int x)
{
return x*180;
}
int burger(int x)
{
return x*100;
}
int Dosa(int x)
{
return x*120;
}
int Idli(int x)
{
return x*50;
}
int Paubhaji(int x)
{
return x*80;
}

int main()
{
    int a,choice,x;
    
	printf("------------MENU-------------\n\n");
	printf("1.Pizza       price=180rs/pcs\n");
	printf("2.Burger      price=100rs/pcs\n");
	printf("3.Dosa        price=120rs/pcs\n");
	printf("4.Idli        price=50rs/pcs\n");
	printf("5.Pau bhaji   price=80rs/pcs\n");
	do{
	
	printf("\nPlease Enter Your Choice :");
	scanf("%d",&choice);
	
    switch(choice)
	{
		case 1: printf("\n[You Have Selected Pizza]\n");
		printf("Enter The Quantity :");
		scanf("%d",&a);	
		printf(" pizza Total Amount = %d\n",pizza(a));
		break;
		
		case 2: printf("\n[You Have Selected Burger]\n");
		printf("Enter The Quantity :");
		scanf("%d",&a);	
		printf("burger Total Amount = %d\n",burger(a));
		break;
		
		
		case 3: printf("\n[You Have Selected Dosa]\n");
		printf("Enter The Quantity :");
		scanf("%d",&a);
		printf("dosa Total Amount = %d\n",Dosa(a));	
		break;		
		
		case 4: printf("[You Have Selected Idali]\n");
		printf("Enter The Quantity :");
		scanf("%d",&a);	
		printf("idli Total Amount = %d\n",Idli(a));
		break;
		
		case 5: printf("\n[You Have Selected Pau Bhaji]\n");
		printf("Enter The Quantity :");
		scanf("%d",&a);	
		printf(" paubhaji Total Amount = %d\n",Paubhaji(a));
		break;
		
		default:
		printf("\nInvalid choice...!");
		
		}
		
		printf("\nDo You Want to Continue......Enter 'Y' or 'N'.......");
		scanf("%s",&x);
		
}
    while(x=='Y'&&x=='y'||x!='N'&&x!='n');
    
    
			
	return 0;		
}
