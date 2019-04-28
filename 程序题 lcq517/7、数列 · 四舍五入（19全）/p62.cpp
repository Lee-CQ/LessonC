#include"stdio.h"
#include"math.h"

double JieChen(int i)
{
	double jiecheng=1;
	for(int j=1;j<=i;j++)
		jiecheng = jiecheng*j;
	printf("%.2lf\n",jiecheng);
	return jiecheng;
}
int main()
{
	float x=2,y=2;
	for(int i=3;i<=40;i=i+2)
	{
		y = y-pow(x,i)/JieChen(i);
	}
	printf("%.2f\n",y);
	return 0;
}