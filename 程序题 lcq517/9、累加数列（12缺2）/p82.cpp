#include"stdio.h"

int main()
{
	double a=0,b=0,c=1,d=0,sum=1;
	for(int i=4;i<=30;i++)
	{
		d=a+b+c;
		a=b;b=c;c=d;
		sum= sum+d;
	}
	printf("%.0lf\n",sum);
	return 0;
}