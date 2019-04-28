#include"stdio.h"
int main()
{
	int a,b,c,d,sum=0;
	for(int i=1000;i<=10000;i++)
	{
		a=i/1000;
		b=(i-a*1000)/100;
		c=(i-a*1000-b*100)/10;
		d=i%10;
		if((a+c)==(b*d))
			sum=sum+i;
	}
	printf("%d\n",sum);
	return 0;
}
