#include"stdio.h"

int main()
{
	double f[51]={1,1,0},max=-99999,min=99999;
	for(int n=3;n<=50;n++)
		f[n] = f[n-1]-2*f[n-2]+f[n-3];
	for(int i=0;i<=50;i++)
	{
		if(f[i]>max)
			max=f[i];
		if(f[i]<min)
			min=f[i];
	}
	printf("max=%.0lf\nmin=%.0lf\n",max,min);
	return 0;
}