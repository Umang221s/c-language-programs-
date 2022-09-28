#include<stdio.h>
int main()
{
	int	pin=1295, income,year;
	float tex=0,tex1,tex2,tex3;
    printf("Enter Your Pin Number :");
    scanf("%d",&pin);
    if(pin==1295)
   
    {
    	printf("Please Enter your Monthly Income :\n");
        scanf("%d",&income);
        year=income*12;
        printf("Your yearly Income is = %d\n",year); 
		
		if(year<=250000)
        {
        	printf("your tex is = %.2f",tex);        
		}	    
    
        if(year>=250000&&year<=500000)
        	{
        		tex1=year*0.5/100*10;
        		printf("your total tex is = %.2f",tex1);
			}
     	if(year>=500000&&year<=1000000)
            {
        		tex2=year*0.20/100*10;
        		printf("your total tex is = %.2f",tex2);
			}
		if(year>=1000000)
            {
        		tex3=year*0.30/100*10;
        		printf("your total tex is = %.2f",tex3);
			}     		
	}
        	
   	else
	{
		printf("Incorrect pin Number");
	}  
     
	return 0;
}