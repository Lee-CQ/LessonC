#include"stdio.h"


int main()
{
	float s=0,a=1,b=2,t;
	for(int i=1;i<=30;i++)
	{
		s = s+a/b;
		t=b;	b=a+b;	a=t;
	}
	printf("%.2f\n",s);
	return 0;
}