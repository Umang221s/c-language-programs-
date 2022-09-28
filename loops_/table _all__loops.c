#include<stdio.h>
int main()
{
  int a,n,x;
  printf("Enter Any Number");
  scanf("%d",&n);
  for(a=1;a<=10;a++)
  {
       
  	for(int x=1;x<=n;x++)
  	{
  		printf("%d X %d = %d  ",x,a,a*x); 	     
    }
   	printf("\n");
  }
    
	 	
}