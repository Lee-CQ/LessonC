#include"stdio.h"
int main()
{
	int x,a,b,c,sum;
	x=100;
	sum=0;
	while(x<=999)
	{
		a=x/100;
		b=x%100/10;
		c=x%10;
		if(a*a*a+b*b*b+c*c*c==x)
			sum=sum+x;
		x++;
	}
	printf("%d\n",sum);
	return 0;
}