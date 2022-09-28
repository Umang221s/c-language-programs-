#include<stdio.h>
int main()
{
	float x1,y1,x2,y2,result;
	
	printf("Input 4 number");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	result=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	
	printf("Distance between the said points: %d",result);
}