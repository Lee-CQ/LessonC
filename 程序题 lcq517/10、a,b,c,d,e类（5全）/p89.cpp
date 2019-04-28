#include"stdio.h"

int main()
{
	long i;
	int a,b,c,d,f,n=0;
	for(i=10000;i<=99999;i++)
	{
		a=i/10000;
		b=i%10000/1000;
		c=i%1000/100;
		d=i%100/10;
		f=i%10;

		for(int e=2;e<=9;e++)
			if(i*e==f*10000+d*1000+c*100+b*10+a)
				n++;
	}
				
	printf("%d\n",n);
	return 0;
}