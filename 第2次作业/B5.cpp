#include"stdio.h"

 int main()
{
	float r, h, pi;

	float circle_area, circle_perimeter;
	float ball_area,  ball_volume;
	float cyclinder_volume;

	pi = 3.14F;
	printf("��������r,h(��,����)\n");
	scanf("%f,%f",&r,&h);

	printf("r=%f,h=%f\n\n",r,h);

	circle_perimeter = pi*2*r;
	circle_area = pi*r*r;

	ball_volume = 4*pi*r*r;
	ball_area = (4*pi*r*r*r)/3;
	
	cyclinder_volume = circle_perimeter*h;

	printf("Բ���ܳ�������ֱ�Ϊ%.2f,\t%.2f\n",circle_perimeter,circle_area);
	printf("��ı����������ֱ�Ϊ%.2f,\t%.2f\n",ball_area, ball_volume);
	printf("Բ�����Ϊ%.2f\n",cyclinder_volume);
	return 0;
}
