#include"stdio.h"
main()
{
	float m,t;
	t=1;
	m=2;
	while(m<=50)
	{
		t=t-1/(m*m);
		m++;
	}
	printf("%.4f\n",t);
}