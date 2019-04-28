#include"stdio.h"

int main()
{
	long x;
	int	a,b,c,d,e,f;
	scanf("%6ld",&x);
	a = x/100000;
	b = x%100000/10000;
	c = x%10000/1000;
	d = x%1000/100;
	e = x%100/10;
	f = x%10;
	x = a+b*10+c*100+d*1000+e*10000+f*100000;
	printf("%d\n",x);

	return 0;
}