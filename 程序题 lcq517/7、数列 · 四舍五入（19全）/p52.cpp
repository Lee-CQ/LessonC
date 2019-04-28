#include"stdio.h"
main()
{
	float n,s;
	n=1;
	s=0;
	while(n<=100)
	{
		s=s+(1/(2*n-1)-(1/(2*n)));
		n++;
	}
	printf("%.3f\n",s);
}