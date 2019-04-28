#include"stdio.h"

int main()
{
	int x,a,b,c,d;
	scanf("%4d",&x);
	a = x/1000;
	b = x%1000/100;
	c = x%100/10;
	d = x%10;
	x = a+b*10+c*100+d*1000;
	printf("%d\n",x);

	return 0;
}