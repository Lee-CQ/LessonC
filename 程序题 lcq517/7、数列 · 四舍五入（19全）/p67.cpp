//49.395
#include"stdio.h"


int main()
{
	float sum=0,n=1,max;
	while(true)
	{	max=sum;
		sum = sum+(n+1)/n++;
		if(sum>50)
			break;
	}
	printf("%.3f\n",max);
	return 0;
}