#include"stdio.h"
#include"math.h"

int main()
{
	int a=0;
	while (a==0)
	{
		float a,b,c,s,area;
		printf("请输入三角形三边长度(用逗号隔开,最多保留2位数字)");
		scanf("%f,%f,%f",&a,&b,&c);

		if (a+b<=c||a+c<=b||b+c<=a)
		{
			printf("You have a mis take.Please try again.\n");
		}
		else
		{
			s = (a+b+c)/2;
			area = (float)(sqrt(s*(s-a)*(s-b)*(s-c)));
			printf("这个三角形的面积是:%.4f\n",area);
			break;
		}
	}
	return 0;
}
