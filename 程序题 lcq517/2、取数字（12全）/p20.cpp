#include"stdio.h"
#include"math.h"

int main()
{
	int i=1000,a,b,c,d,x;
	for(i=9999;i>=1000;i--)
	{
		a = i/1000;
		b = i%1000/100;
		c = i%100/10;
		d = i%10;

		x = (int)(sqrt(i));
		if(x*x==i && a+c==b*d)
		{	printf("%d",i);break;}
		
	}
	return 0;
}
