#include"stdio.h"

int main ()
{
	long a,b,c,n=200;//n为最小值
	for(c=131;c<=200;c++)
		for(a=1;a<=198;a++)
			for(b=a+1;b<=198;b++)
				if(a*a+b*b==c*c)
				{
					if(c<n)
						n=c;
				//	printf("%ld\t%ld\t%ld\n",a,b,c);
					a=c;
				}
	printf("%ld\n",n);
	return 0;
}