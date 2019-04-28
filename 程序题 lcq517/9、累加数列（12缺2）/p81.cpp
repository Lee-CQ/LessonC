#include"stdio.h"

int main()
{
	double f[49]={1,1},sum=1;
	for(int n=2;n<=49;n++)
	{
		f[n] = f[n-1]+f[n-2];
	}

	printf("%.0lf\n",f[44]);
	return 0;
}