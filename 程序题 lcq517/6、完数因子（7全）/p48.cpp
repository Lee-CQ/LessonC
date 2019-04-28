#include"stdio.h"

int main()
{
	int x,sum=0,i,t=0;
	for(x=100;x>=10;x--)
	{
		t=0;
		for(i=1;i<=x;i++)
		{
			if(x%i==0)
			{
				t=t+1;
			}
		}
		if(x%t==0)
		{	
			sum=sum+1;
		//	printf("%d\t",x);
			
		}
	}
//	printf("\n");
	printf("%d\n",sum);
	return 0;
}