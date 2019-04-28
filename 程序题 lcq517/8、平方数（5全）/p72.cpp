//自然数对
#include"stdio.h"
#include"math.h"

bool Sqrt_0(int x)
{
	int a;
	a=(int)(sqrt(x));
	if(a*a==x)
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
				sum_b = sum_b + (a-b);
		}
	printf("sum=%d\n",sum_b);
	return 0;
}