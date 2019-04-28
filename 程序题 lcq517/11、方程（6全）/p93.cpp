#include"stdio.h"
#include"math.h"

int main()
{
	int x,y,z,max=0,min=9999;
	for(z=1;z<=25;z++)
		for(y=z+1;y<=25;y++)
			for(x=y+1;x<=25;x++)
				if((x*x+y*y+z*z)==(25*25))
				{
					int sum;
					sum = x+y+z;
				//	printf("sum=%d\n",sum);
					if(sum>max)
						max=sum;
					if(sum<min)
						min=sum;
				}
			
	printf("max=%d\tmin=%d\n",max,min);
	return 0;
}