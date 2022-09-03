#include<stdio.h>
int main()
{
    int x,result=0,react;
	scanf("%d",&x);
	printf("your number = %d",x);
	while(x!=0)
	{
		react=x%10;//3  2
		result=result*10+react;  //3  
		x=x/10;//12
	}
	printf("\nreverce number = %d",result);
		

	return 0;
}