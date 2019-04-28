#include"stdio.h"

int main()
{
	int x,sum=0,i,t=0;
	for(x=1;x<=1000;x++)
	{
		t=0;
		for(i=1;i<x;i++)
		{
			if(x%i==0)
				t=t+i;
		}
		if(x==t)
			sum=sum+x;	
			
	}
	printf("%d\n",sum);
	return 0;
}