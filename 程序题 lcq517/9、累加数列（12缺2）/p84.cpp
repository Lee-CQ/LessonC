#include"stdio.h"

int main()
{
	double s=0,sum=0;
	for(int n=2;n<=40;n+=2)
	{
		s=s+n;
		sum=sum+s;
	}
	printf("%.0lf\n",sum);
	return 0;
}