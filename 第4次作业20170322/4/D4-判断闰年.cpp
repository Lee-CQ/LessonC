/*
�Ӽ���������һ�����,�ж��������Ƿ�������
*/

#include "stdio.h"

int main()
{
	int year;
	scanf("%d",&year);
	if(year%400==0 || (year%4==0 && !(year%100==0)))
		printf("%d��������\n",year);
	else
		printf("�ⲻ�ǰ�!\n");

	return 0;
}