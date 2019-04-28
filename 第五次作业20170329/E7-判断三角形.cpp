#include "stdio.h"

int main ()
{
	float a,b,c;
	printf("任意输入三个数,用逗号隔开:");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		if(a==b||b==c)
		{
			if (a==c)
				printf("这是一个等边三角形\n");
			else
					printf("这是一个等腰三角形\n");
		}
	
		else
			printf("这是一般三角形\n");
	}
	else
		printf("这不是三角形\n");
	return 0;
}