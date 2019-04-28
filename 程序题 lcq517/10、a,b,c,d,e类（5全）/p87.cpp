#include"stdio.h"

int main()
{
	int i,a,b,c,d,n=0;
	for(i=1000;i<=9999;i++)
	{
		a=i/1000;
		b=i%1000/100;
		c=i%100/10;
		d=i%10;

		for(int e=2;e<=9;e++)
			if(i*e==b*1000+c*100+d*10+e)
				n++;
	}
				
	printf("%d\n",n);
	return 0;
}