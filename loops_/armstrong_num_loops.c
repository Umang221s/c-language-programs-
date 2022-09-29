#include<stdio.h>
int main()
{
   int n,ori,result=0,rem;
   printf("enter any number");
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
