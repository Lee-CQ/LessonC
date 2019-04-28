#include"stdio.h"
main()
{
	long a,b,min;
	     min=716699;
	for(a=1;a<=716699;a++)
	{
		b=716699/a;
		if(a*b==716699)
			if(min>a+b)
				min=a+b;
	}
	printf("min=%ld\n",min);
}