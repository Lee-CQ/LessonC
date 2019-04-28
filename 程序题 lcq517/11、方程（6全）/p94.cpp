#include"stdio.h"
#include"math.h"

int main()
{
	int x,y,z,n=0;
	for(z=-55;z<=55;z++)
		for(y=z+1;y<=55;y++)
			for(x=y+1;x<=55;x++)
				if((x*x+y*y+z*z)==(55*55))
				 n++;
	printf("n=%d\n",n);
	return 0;
}