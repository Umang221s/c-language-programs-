#include<stdio.h>
	int prime(int num)
	{
		int x;
		
		for(x=2;x<=num/2;x++)
		{
			if(num%x==0)
			{
				return 0;
			}
		}
		return 1;
	}
	
	
	int amstrong(int num)
	{
		int n,ori,result=0,rem;
        ori=n;
        while(n!=0)
        {
	       rem=n%10;   
           result=result+rem*rem*rem;
           n=n/10;
    }
    return 0;
}

int perfect(int num)
{
	int i,sum=0,n;
	n=num;
	for(i=1;i<n;i++)
	{
		if(n%1==0)
		{
			sum=sum+n;
		}	
	}
	return (num==sum);
}

	



int main()
{
	int num;
	printf("Enter Any Number :");
	scanf("%d",&num);
	
	if(prime(num))
	{
		printf("%d is Prime Number\n ",num);
	}
	else
	{
		printf("%d is Not Prime Number\n ",num);
	}
	
	
	if(amstrong(num))
	{
		printf("%d is Amstrong Number\n",num);
	}
	else
	{
		printf("%d is not Amstrong Number\n",num);
	}
	
	if(perfect(num))
	{
		printf("%d is Perfect Number\n",num);
	}
	else
	{
		printf("%d is Not Perfect Number\n",num);
	}
	
}