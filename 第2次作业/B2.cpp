#include"stdio.h"
#include"math.h"

int main()
{
	int a=0;
	while (a==0)
	{
		float a,b,c,s,area;
		printf("���������������߳���(�ö��Ÿ���,��ౣ��2λ����)");
		scanf("%f,%f,%f",&a,&b,&c);

		if (a+b<=c||a+c<=b||b+c<=a)
		{
			printf("You have a mis take.Please try again.\n");
		}
		else
		{
			s = (a+b+c)/2;
			area = (float)(sqrt(s*(s-a)*(s-b)*(s-c)));
			printf("��������ε������:%.4f\n",area);
			break;
		}
	}
	return 0;
}
