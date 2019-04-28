#include"stdio.h"
main()
{
	float i=1,s=1,m=1;
	while(i<=25)
	{
		m=i*m;
		s=s+(1/m);
		i++;
	}
	printf("%.4f\n",s);
}