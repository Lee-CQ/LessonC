#include"stdio.h"
#include"math.h"

int main()
{
	int x,y,n,max=0;
	for(x=-150;x<=150;x++)
		for(y=-200;y<=200;y++)
			if((8*x-5*y)==3)
			{
				n=(int)(abs(x)*abs(y));
				if(n>max)
					max=n;
			}
	printf("%d\n",max);
	return 0;
}