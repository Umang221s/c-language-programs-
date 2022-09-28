#include<stdio.h>
int main()
{
	int pnz;
	printf("Enter any Int number :");
	scanf("%d",&pnz);
	
	switch(pnz>0)
	{
		case 1:
			printf("Positive Number");
	}
	switch(pnz<0)
	{
		case 1:
			printf("Negetive Number");
	}
	switch(pnz==0)
	{
		case 1:
			printf("zero Number");
	}
	
}