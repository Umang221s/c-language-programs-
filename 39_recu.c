#include<stdio.h>

int fun(int x)//0
{
	if(x>1)//0>0
	{
		return x+fun(x-1);//15*fun(1-1)
	}	
}

int main()
{
	printf("%d",fun(5));
	return 0;
}