#include "stdio.h"

int main()
{
	float x,y;
	scanf("%f",&x);
	if(x<=1)
		y = 2*x-1;
	else
		y = x;
	printf("y=%.2f",y);
	return 0;
}