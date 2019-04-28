#include "stdio.h"

int main()
{
	int a=12,n=5;
	a+=a;
	printf("%d\n",a);
	a-=2;
	printf("%d\n",a);
	a*=2+3;
	printf("%d\n",a);
	a/=(a+a);
	printf("%d\n",a);
	a%=(n%=2);
	printf("%d\n",a);
	return 0;
}