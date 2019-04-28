#include"stdio.h"

int main()
{
	int a,b,c,n=0;//a 五分；b 两分 ；c 一分；
	for(a=8;a<=15;a++)
		for(b=8;b<=30;b++)
			for(c=8;c<=84;c++)
				if(a*5+b*2+c==100)
					n++;
	printf("%d\n",n);
	return 0;
}