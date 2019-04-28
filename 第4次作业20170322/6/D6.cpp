/*从键盘输入一个五位数,倒叙输出*/
#include "stdio.h"
#include "string.h"

int main()
{
	long x,a,b,c,d,e;
	printf("输入5位数:");
	scanf("%ld",&x);
	a = x/10000;
	b = x%10000/1000;
	c = x%1000/100;
	d = x%100/10;
	e = x%10;
	x = a*1+b*10+c*100+d*1000+e*10000;
	printf("%ld\n",x);
	
	return 0;
}