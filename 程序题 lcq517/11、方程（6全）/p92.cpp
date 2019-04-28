#include"stdio.h"
#include"math.h"

int main()
{
	int x,y,z,max=0,min=9999;
	for(z=-55;z<=55;z++)
		for(y=z+1;y<=55;y++)
			for(x=y+1;x<=55;x++)
				if((x*x+y*y+z*z)==(55*55))
				{
					int sum;
					sum = (int)(abs(x)+abs(y)+abs(z));
				//	printf("sum=%d\n",sum);
					if(sum>max)
						max=sum;
					if(sum<min)
						min=sum;
				}
	printf("max=%d\tmin=%d\n",max,min);
	return 0;
}