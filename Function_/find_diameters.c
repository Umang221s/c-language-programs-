#include<stdio.h>
float getDiameter(int red)
{
	
	
	return 2 * red;
}

float getCircumference (float red)
{
	
	
	return 2*3.14*red ;
}

float getArea(float red)
{
	
	
	return 3.14 *red * red;
}


int main()
{
		float red,cir,dia,area;
		
		printf("Enter Redius of circle ");
		scanf("%f",&red);
		printf("\nDiameter = %.2f units",getDiameter(red));
	    printf("\nCircumference = %.2f units",getCircumference (red));
        printf("\nAressa = %.2f units",getArea(red));	
	
	
	return 0;
}