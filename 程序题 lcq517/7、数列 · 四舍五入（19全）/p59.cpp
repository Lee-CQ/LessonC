#include"stdio.h"
main()
{
	float n=1,s=0,k=1;
	while(n<=100)
	{
		s=s+k*(1/(2*n-1));
		k=k*(-1);
		n++;
	}
	printf("s=%.4f\n",s);
}