/*
从键盘上输入一个年份,判断这个年份是否是闰年
*/

#include "stdio.h"

int main()
{
	int year;
	scanf("%d",&year);
	if(year%400==0 || (year%4==0 && !(year%100==0)))
		printf("%d年是闰年\n",year);
	else
		printf("这不是啊!\n");

	return 0;
}