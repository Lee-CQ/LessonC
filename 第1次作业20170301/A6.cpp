#include "stdio.h"

main(void)
{  
	int a=3, b=4, c=5;//定义长方体的长宽高，并初始化
	int s=0, v=0;     //定义长方体的表面积体积
	s = 2*(a*b+b*c+c*a);
	v = a*b*c;
	printf("s=%d\nv=%d\n",s,v);
}