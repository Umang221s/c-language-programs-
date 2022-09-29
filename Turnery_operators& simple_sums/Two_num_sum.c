#include<stdio.h>
main()
{
	int num1,num2,sum;
	printf("Enter 2 int value");
	scanf("%d%d",&num1,&num2);
	printf("num1=%d\nnum2=%d",num1,num2);
  
    sum=num1-num2;
    printf("\n%d-%d=%d",num1,num2,sum);
	
	
	return 0;
}