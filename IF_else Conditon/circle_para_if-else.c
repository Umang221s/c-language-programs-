#include<stdio.h>
int main()
{
	int radius;
    float p=3.14,parameter,area;
	printf("Enter Circul radius");
	scanf("%d",&radius);
	
	parameter=2*p*radius;
    printf("Prameter of the circle is = %.3f \n",parameter);
    
    area=p*radius*radius;
    printf("Area of the circle is = %.3f",area);
    
    
    return 0;
}