#include"stdio.h"

int main()
{
	double f[51]={1,1,0},max=-10000;
	for(int n=3;n<=50;n++)
		f[n] = f[n-1]-2*f[n-2]+f[n-3];
	for(int i=0;i<=50;i++)
		if(f[i]>max)
			max=f[i];
	printf("%.0lf\n",max);
	return 0;
}