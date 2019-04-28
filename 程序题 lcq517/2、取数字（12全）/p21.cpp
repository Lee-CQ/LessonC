#include"stdio.h"
int main()
{
	int a,b,c,d,i;
	long s=0;
	for(i=1000;i<=9999;i++)
	{
		a=i/1000;
		b=i%1000/100;
		c=i%100/10;
		d=i%10;
		if(a*a+c*c==b*b*b+d*d*d)
			s=s+i;
	}
	printf("%ld\n",s);
	return 0;
}