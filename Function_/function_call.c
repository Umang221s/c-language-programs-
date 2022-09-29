#include<stdio.h>
int function()
{
	int n,ori,result=0,rem;
   printf("enter any number for this number is armstrong or not ?\n");
   scanf("%d",&n);
   ori=n;
   while(n!=0)
    {
	rem=n%10;   
    result=result+rem*rem*rem;
    n=n/10;
    }
    if(result==ori)
	{
		printf("%d  is armstrog number",ori);
	}
	else
	{
		printf("%d is not armstrong number",ori);
	}
}
int function1()
{
		int u,rev,result=0,sum;
	printf("\nEnter Any  For this number is palindrop ?");
	scanf("%d",&u);
	sum=u;
	while(u!=0)
	{
		rev=u%10;   
		result=result*10+rev;  
	    u=u/10; 
    }
    printf("reverce number = %d\n",result);     
	if(sum==result)
	{
		printf("%d  is Palindrome number",sum);
	}
	else
	{
		printf("%d is not Palindrome number",sum);
	}
}
int main()
{
	function();
	function1();
}