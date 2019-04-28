#include"stdio.h"

int main()
{
	float y=0;
	for(float n=1;n<=50;n++)
		y = y+ n/(2*n-1) ;
	printf("%.2f\n",y);

	return 0;
}