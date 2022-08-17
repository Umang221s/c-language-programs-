#include<stdio.h>
int main()
{
	int a,b,c,sum1;
	char result;
	printf("Enter any 3 value");
	scanf("%d%d%d",&a,&b,&c);
	printf("\na=%d\nb=%d\nc=%d",a,b,c);
	printf("\nSum of (a+b+c) = %d",a+b+c,sum1);
	
	int x,y,z,sum2;
    printf("\nEnter any 3 value");
	scanf("%d%d%d",&x,&y,&z);
	printf("\nx=%d\ny=%d\nz=%d",x,y,z);
	printf("\nSum of (x+y+z) = %d",x+y+z,sum2);
	
	result=(sum1<0)?'T':'F';
	printf("\nResult1 = %c",result);
	
	result=(sum2>0)?'T':'F';
	printf("\nResult2 = %c",result);
	
	
	
	
	
	
	return 0;
}