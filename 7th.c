#include<stdio.h>
int main()
{
	int M,N,O,P,Q,R,sum;
	printf("enter eny 6 value");
	scanf("%d%d%d%%d%d%d",&M,&N,&O,&P,&Q,&R);
	printf("%d=M\n%d=N\n%d=O\n%d=P\n%d=Q\n%d=R",M++,++N,O--,P++,Q,R);
	sum=M+N+O/P*Q-R;
	printf("\n%d+%d+%d+%d+%d+%d=%d",M,N,O,P,Q,R,sum);
		
	
}