#include "stdio.h"

int main ()
{
	float a,b,c;
	printf("��������������,�ö��Ÿ���:");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		if(a==b||b==c)
		{
			if (a==c)
				printf("����һ���ȱ�������\n");
			else
					printf("����һ������������\n");
		}
	
		else
			printf("����һ��������\n");
	}
	else
		printf("�ⲻ��������\n");
	return 0;
}