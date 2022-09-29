#include<stdio.h>
int main()
{
	int umang;
	printf("Enter Your Age");
	scanf("%d",&umang);
	if(umang>=18)
	{
		printf("congratulation ! you are eligible for casting your Vote : ");
	}
	else
	{
		printf("sorryy ! you are  Not eligible for casting your Vote :");
	}
	
	return 0;
}