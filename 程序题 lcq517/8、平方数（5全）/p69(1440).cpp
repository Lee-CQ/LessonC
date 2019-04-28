#include"stdio.h"
#include"math.h"
/*
100>=A>=B>0;
(A+B)&(A-B)都可以开平方;
*/
bool Sqrt_0(float x)
{
	int a;
	a=sqrt(x);
	if(x==a*a)
		return true;
	else
		return false;
}

int main()
{
	int a,b,sum_b=0;
	for(a=1;a<=100;a++)
		for(b=1;b<=a;b++)
		{
			if(Sqrt_0(a+b)&&Sqrt_0(a-b))
				sum_b = sum_b + b;
		}
	printf("sum=%d\n",sum_b);
	return 0;
}

