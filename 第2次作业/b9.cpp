#include"stdio.h"
#include"math.h"

main()
{
	float x,y;
	float result;
	
	printf("计算(x^3+y^3)/(sqrt(x+y)-x*y)的值!\n依次输入x,y的值,用逗号隔开!");
	scanf("%.2f,%.2f",&x,&y);
	result = (pow(x,3)+pow(y,3))/(sqrt(x+y)-x*y);
	printf("(x^3+y^3)/(sqrt(x+y)-x*y)的值为%.2f",result);
}