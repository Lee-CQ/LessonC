#include "stdio.h"

main(void)
{  
	int a=3, b=4, c=5;//���峤����ĳ���ߣ�����ʼ��
	int s=0, v=0;     //���峤����ı�������
	s = 2*(a*b+b*c+c*a);
	v = a*b*c;
	printf("s=%d\nv=%d\n",s,v);
}