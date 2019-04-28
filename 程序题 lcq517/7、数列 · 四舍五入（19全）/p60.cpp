#include"stdio.h"
main()
{
	float n,s;
	n=1;
	s=0;
	while(n<=50)
	{
		s=s+1/(n*(n+1));
		n++;
	}
	printf("s=%.4f\n",s);
}