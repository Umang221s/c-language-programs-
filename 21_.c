#include<stdio.h>
int main()
{
	int id,salary;
	float hr,total;
	printf("Enter youyr emp_id");
	scanf("%d",&id);
    
	printf("\nenter your salary amount / hr = ");
	scanf("%d",&salary);
	
	printf("\nenter your working Hr = ");
	scanf("%f",&hr);
	
	total=salary*hr;
	
	printf("\nemp_id = %d\ntotal salary = U$  %.2f",id,total);
	
	return 0;
}