#include"stdio.h"
#include"math.h"

int main()
{
	float pi=3.1415F;
	float x, y;
	float result;
	printf("请分别输入x,y(用逗号隔开)");
	scanf("%f,%f",&x, &y);
	result = (float)(sqrt(pow(x,3)+pow(y,3))/fabs(x-y) + sin(pi/5) + tan(pi/5));
	
	printf("result=%.2f\n",result);
	return 0;
}
