#include"stdio.h"
int main()
{
	int x=100,a,b,c,max;
	while(x<=999)
	{
		a=x/100;
		b=x%100/10;
		c=x%10;
		if(a!=b&&b!=c&&a!=c&&x==a*a*a+b*b*b+c*c*c)
		    max=x;
		x++;
	}
	printf("%d\n",max);
}