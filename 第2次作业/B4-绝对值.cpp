#include"stdio.h"
#include"math.h"

float main()
{	
	float a;
	printf("可以输入任意实数，返回值保留2被小数\n");
	scanf("%f",&a);
	a = (float)(fabs(a));
	printf("它的绝对值为%.2f\n",a);
	return 0;
}
