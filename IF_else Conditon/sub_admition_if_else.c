#include<stdio.h>
int main()
{
	int chem,phy,maths,total,total1;
	printf("Enter your subject marks");
	scanf("%d\n%d\n%d",&chem,&phy,&maths);
	printf("chem=%d\nphy=%d\nmaths=%d\n",chem,phy,maths);
	total=chem+phy+maths;
	printf("\ntotal of three subject is = %d\n",total);
	total1=phy+maths;
	printf("\nphy and maths total = %d\n",total1);
	if(phy>=55&&chem>=50&&maths>=65&&total>=190&&total1>=140)
	{
       printf("\nCongratulation ! You Are Eligible for Admition");
	}
	else
	{
		printf("\nSorry ! You Are Not Eligible for Admition");
	}
	return 0;
}