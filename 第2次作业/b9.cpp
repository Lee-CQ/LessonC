#include"stdio.h"
#include"math.h"

main()
{
	float x,y;
	float result;
	
	printf("����(x^3+y^3)/(sqrt(x+y)-x*y)��ֵ!\n��������x,y��ֵ,�ö��Ÿ���!");
	scanf("%.2f,%.2f",&x,&y);
	result = (pow(x,3)+pow(y,3))/(sqrt(x+y)-x*y);
	printf("(x^3+y^3)/(sqrt(x+y)-x*y)��ֵΪ%.2f",result);
}