#include"stdio.h"

int main()
{
	int x=99, geshu=0, sum=0;
	while(x<999)
	{
		x++;
//		printf("%d",x);
		int a,b,c;
		a = x/100;
		b = x%100/10;
		c = x%10;
		if(a*a*a+b*b*b+c*c*c == x)
		{
			sum = sum+x;
			geshu++;
		}
	}
	printf("水仙花数的个数\t%d\n总和\t%d\n",geshu,sum);
	return 0;
}