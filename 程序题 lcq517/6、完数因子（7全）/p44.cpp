#include"stdio.h"

int main()
{
	int x,max=0,i,t=0,k=0;
	for(x=1000;x>=1;x--)
	{
		t=0;
		for(i=1;i<x;i++)
		{
			if(x%i==0)
				t=t+i;
		}
		if(x==t)
		{
			k++;
			if(k==2)
				max=x;	
		}
		if(k==2)
		break;		
	}
	printf("%d\n",max);
	return 0;
}