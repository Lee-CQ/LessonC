#include"stdio.h"

int main ()
{
	long a,b,c,n=0;
	for(c=100;c<=200;c++)
		for(a=1;a<=198;a++)
			for(b=a+1;b<=198;b++)
				if(a*a+b*b==c*c)
				{
					n++;
					printf("%ld\t%ld\t%ld\n",a,b,c);
					a=c;
				}
	printf("%ld\n",n);
	return 0;
}