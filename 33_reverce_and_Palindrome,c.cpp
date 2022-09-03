#include<stdio.h>
int main()
{
	int u,rev,result=0,sum;
	printf("Enter Any Num");
	scanf("%d",&u);
	sum=u;
	while(u!=0)
	{
		rev=u%10;   //123%10=3   12%10=2   1%10=1
		result=result*10+rev;  //0*10+3=3   3*10+2=32  32*10+1=321
	    u=u/10; //123/10== 12  12/10=1  1/10=0  
    }
    printf("reverce number = %d\n",result);     
	if(sum==result)
	{
		printf("%d  is Palindrome number",sum);
	}
	else
	{
		printf(" %d is not Palindrome number",sum);
	}

}