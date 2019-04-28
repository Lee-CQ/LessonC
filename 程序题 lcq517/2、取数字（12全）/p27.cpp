#include"stdio.h"
int main()
{
	long x,a,b,c,d,e,max;
	x=10000;
	while(x<=99999)
	{
		a=x/10000;
		b=x%10000/1000;
		c=x%1000/100;
		d=x%100/10;
		e=x%10;
		if(a*a+b*b+c*c+d*d+e*e==100)
			max=x;
		x++;
	}
	printf("%ld\n",max);
    return 0;
}