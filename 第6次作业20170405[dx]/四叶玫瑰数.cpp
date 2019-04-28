#include"stdio.h"
#include"math.h"

int main()
{
	int x=999, geshu=0, sum=0;
	while(x<9999)
	{
		x++;
//		printf("%d",x);
		int a,b,c,d;
		a = x/1000;
		b = x%1000/100;
		c = x%100/10;
		d = x%10;
		printf("%d,%d,%d,%d",a,b,c,d);
		if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d == x)
		{
			printf("%d",x);
			sum = sum+x;
			geshu++;
		}
	}
	printf("水仙花数的个数\t%d总和\t%d\n",geshu,sum);
	return 0;
}