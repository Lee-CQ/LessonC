#include"stdio.h"
main()
{
	float n=1,s=0,k=1,a;
	while(n<=50)
	{
		s=s+k*1/(2*n-1);
		k=k*(-1);
		n++;
	}
	a=s*4;
	printf("%.2f\n",a);
}
	
		
