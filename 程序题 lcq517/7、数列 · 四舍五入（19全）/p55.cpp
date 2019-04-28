#include"stdio.h"
main()
{
	float n,s;
	n=1;
	s=0;
	while(n<=20)
	{
		s=s+1/(n*(n+1));
		n++;
	}
	printf("%.2f\n",s);
}