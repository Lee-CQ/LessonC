#include"stdio.h"

int main()
{
	double a=1,b=2,c=0,d;
	while(c<10000000)
	{
		d=c;
		c=a+b;
		a=b;b=c;
	}
	printf("%.0lf\n",d);
	return 0;
}