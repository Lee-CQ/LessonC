#include"stdio.h"
main()
{
	int x,a,sum;
	    sum=0;
	for(x=2;x<=1000;x++)
	{ a=x*x;
	  if(a%10==x||a%100==x||a%1000==x)
		  sum=sum+x;}
	printf("sum=%d\n",sum);
}
	

