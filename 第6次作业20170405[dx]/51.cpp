#include"stdio.h"

int main()
{
	float t=1, m=2;
	while(m<=50)
	{
		t = t-1/(m*m);
		m++;
//		printf("t=%.4f\n",t);
	}


	printf("t=%.4f\n",t);
	return 0;
}