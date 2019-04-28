#include"stdio.h"


int main()
{
	float a=1;
	for(int i=2;i<=50;i++)
	{
		a = 1/(1+a);
	}
	printf("%.3f\n",a);
	return 0;
}