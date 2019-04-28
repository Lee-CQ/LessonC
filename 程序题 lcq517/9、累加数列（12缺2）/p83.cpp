#include"stdio.h"

int main()
{
	double n=1,s=0;
	while(s<=10)
	{
		s=s+1/n;
		n++;
	}
	printf("%.0lf\n",n-1);
	return 0;
}