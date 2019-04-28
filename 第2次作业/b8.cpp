#include "stdio.h"

main()
{
	printf("将要计算x+a%3*(int)(x+y)%2/4的值");
	float x,a,y,result;
	printf("请依次输入x,a,b的值(用逗号隔开,2位有效数字)");
	scanf("%.2f,%.2f,%.2f",&x,&a,&y);
	result = x+a%3*(int)(x+y)%2/4;
	printf("x+a%3*(int)(x+y)%2/4的结果是%.sf");
	
	
	printf("接下来将要计算(float)(a+b)/2+(int)x%(int)y的值");
	int a,b;
	float x,y;
	float result;
	scanf("%d,%d,%.2f,%.2f",&a,&b,&x,&y);
	result = (float)(a+b)/2+(int)x%(int)y;
	printf("(float)(a+b)/2+(int)x%(int)y的值是%.2f",result);
}
