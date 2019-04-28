#include"stdio.h"
main()
{
	float n=1,s=0,m=0;
	while(n<=50)
	{
		m=m+n;
		s=s+1/m;
		n++;
	}
	printf("s=%.4f\n",s);
}