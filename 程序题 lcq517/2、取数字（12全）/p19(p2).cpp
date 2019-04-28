#include"stdio.h"
/*
É¾³ıËØÊıÌõ¼ş
*/

int main()
{
	int i,a,b,c,x=0;
	for(i=300;i<=800;i++)
	{
		a = i/100;
		b = i%100/10;
		c = i%10;
		if((c+b)%10==a)
			x=i;
	}
	printf("x=%d\n",x);
	return 0;
}
