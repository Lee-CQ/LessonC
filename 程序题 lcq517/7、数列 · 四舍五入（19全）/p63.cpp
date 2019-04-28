#include"stdio.h"
main()
{
	float n=1,s=0,k=1;
	while(n<=30)
	{
		s=s+k*(1/n);
		k=k*-1;
		n++;
	}
	printf("s=%.2f\n",s);
}