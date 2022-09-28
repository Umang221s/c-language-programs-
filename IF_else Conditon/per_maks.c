#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,maks;
	float per;
	printf("Input 5 Subject Maks :");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	
	per=(s1+s2+s3+s4+s5)/5;
	printf("Percentage = %.2f\n",per);
	
	if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
		else if(per>=60)
	{
		printf("Grade C");
	}
		else if(per>=40)
	{
		printf("Grade D");
	}
	
	else
	{
		printf("Sorry....You are Fail");
	}
}