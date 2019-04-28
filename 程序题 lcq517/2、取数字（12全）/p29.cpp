#include"stdio.h"
int main()
{
	int a,b,c,d,x=1000,n=0;
	while(x<=9999)
	{
		a=x/1000;
		b=x%1000/100;
		c=x%100/10;
		d=x%10;
		if(a*a+b*b+c*c+d*d==100)
			n=n+1;
		x++;
	}
    printf("%d\n",n);
}