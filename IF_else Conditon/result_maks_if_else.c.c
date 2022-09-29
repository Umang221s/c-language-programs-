#include<stdio.h>
int main()
{
	int a,b,PercentageRank1 = 74.6,PercentageRank2 =77 ,res; 
	printf("Please Enter your pin :");
	scanf("%d",&a);
	if(a==1295) 
	{
		printf("\n.....wellcome UMANG SAVSANI.....\n");
		printf("\nPlease enter your Sheet No :");
	    scanf("%d",&b);
	}
	if(b==101010)
	{
		printf("\nMaths=80\nPhy=65\nChe=49\nEng=80\nGuj=91\n");
	}	
	printf("Percentage Rank1 = 74.6 \n");
	
	
     int x,y;
	printf("\nPlease Enter your pin :");
	scanf("%d",&x);
	if(x==1296) 
	{
		printf("\n.....wellcome ANJALI SAVSANI.....\n");
		printf("\nPlease enter your Sheet No :");
	    scanf("%d",&y);
	}
	if(y==101020)
	{
		printf("\nMaths=86\nPhy=55\nChe=90\nEng=70\nGuj=84\n ");
	}	
	printf("Percentage Rank2 = 77\n");
	res=(PercentageRank1>PercentageRank2&&PercentageRank2>PercentageRank1)?74.6:77;
	printf("Max percentage is = %d",res);
    
	return 0;
}