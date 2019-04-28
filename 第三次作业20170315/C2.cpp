#include "stdio.h"

int main()
{
	int a=3,b=3,c=3,d;
	d = --a+b+++3+(++c)+(c--)+(++a)+5*(++a)+a;
	printf("d=%d\n",d);
	return 0;
}