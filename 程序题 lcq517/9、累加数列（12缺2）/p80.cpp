#include"stdio.h"

int main()
{
	double f[49]={1,1},sum=1;
	for(int n=2;n<=49;n++)
	{
		f[n] = f[n-1]+f[n-2];
		if(n%2==0)
			sum=sum+f[n];
	}

	printf("%.0lf\n",sum);
	return 0;
}