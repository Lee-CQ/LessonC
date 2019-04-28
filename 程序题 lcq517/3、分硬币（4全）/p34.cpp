#include"stdio.h"

int main()
{
	int a,b,c,n=0;//a 3·Ö£»b 2·Ö £»c Ò»1£»
	for(a=1;a<=15;a++)
		for(b=1;b<=23;b++)
			for(c=1;c<=28;c++)
				if(a*3+b*2+c==50 && a+b+c==30)
					n++;
	printf("%d\n",n);
	return 0;
}