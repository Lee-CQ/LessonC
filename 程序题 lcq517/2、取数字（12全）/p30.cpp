#include"stdio.h"
int main()
{
	int a,b,c,d,x,n;
	x=1000;
	n=0;
	while(x<=9999)
	{a=x/1000;
	b=x%1000/100;
	c=x%100/10;
	d=x%10;
	if(x==d*1000+c*100+b*10+a)
		n=n+1;
	    x++;
	}
    printf("n=%d\n",n);
	return 0;
}