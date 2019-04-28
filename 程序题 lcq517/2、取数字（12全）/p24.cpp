#include"stdio.h"
int main()
{
	int x=1,a,b,c,sum=0;
	while(x<=999)
	{
		a=x/100;
		b=x%100/10;
		c=x%10;
		if(x%3==0&&(a==5||b==5||c==5))
			sum++;
		x++;
	}
	printf("%d\n",sum);
	return 0;
}