#include "stdio.h"

main()
{
	printf("��Ҫ����x+a%3*(int)(x+y)%2/4��ֵ");
	float x,a,y,result;
	printf("����������x,a,b��ֵ(�ö��Ÿ���,2λ��Ч����)");
	scanf("%.2f,%.2f,%.2f",&x,&a,&y);
	result = x+a%3*(int)(x+y)%2/4;
	printf("x+a%3*(int)(x+y)%2/4�Ľ����%.sf");
	
	
	printf("��������Ҫ����(float)(a+b)/2+(int)x%(int)y��ֵ");
	int a,b;
	float x,y;
	float result;
	scanf("%d,%d,%.2f,%.2f",&a,&b,&x,&y);
	result = (float)(a+b)/2+(int)x%(int)y;
	printf("(float)(a+b)/2+(int)x%(int)y��ֵ��%.2f",result);
}
