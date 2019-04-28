/*80.98*/
#include"stdio.h"

int main()
{
	float sum=0,a=1,b=2,t;
	for(int i=1;i<=50;i++)
	{
		sum = sum+a/b;
		t=a;	a=a+b;	b=t;
	}
	printf("%.2f\n",sum);
	return 0;
}