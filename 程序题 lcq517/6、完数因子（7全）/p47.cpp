#include"stdio.h"

int main()
{
	int x,max=0,i,t=0,k=0;
	for(x=300;x>=200;x--)
	{
		t=0;
		for(i=1;i<=x;i++)
		{
			if(x%i==0)
				t=t+1;
		}
		if(t%2==1)
		{	k++;
			if(k==2)
			{
				max=x;
				break;
			}
		}	
	}
	printf("%d\n",max);
	return 0;
}