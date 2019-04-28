#include"stdio.h"
#include"math.h"

bool Sqrt_0(int x)
{
	int a;
	a=sqrt(x);
	if(a*a==x)
		return true;
	else
		return false;
}

int main()
{
	int i=1000,a,b,c,d,x,sum=0;
	for(i=1000;i>=9999;i--)
	{
		if(Sqrt_0(i))
		{	a = i/1000;
			b = i%1000/100;
			c = i%100/10;
			d = i%10;
			x=a+b+c+d;
			if(Sqrt_0(x))
				sum=sum+i;
		}
	}
	printf("%d\n",sum);
}