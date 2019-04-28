//Í¬¹¹Êý
#include"stdio.h"

int main()
{
	int i,x,k=10,sum=0;
	for(i=2;i<=1000;i++)
	{
		if(i==k)
			k*=10;
		x=i*i;
		if(x%k==i)
			sum+=i;
	}
	printf("%d\n",sum);
}