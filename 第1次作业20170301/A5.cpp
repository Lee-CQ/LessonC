#include "stdio.h"
#include "math.h"

main()
{   //计算一个球的体积
	float pi = 3.1415, r = 5, v = 0 ;
	v = (4/3)*pi*pow(r,3);
	printf("v=%f\n",v);
}