#include"stdio.h"

int main()
{
	int a,b,c,n=0;//a 五分；b 两分 ；c 一分；
	for(a=1;a<=10;a++)
		for(b=1;b<=23;b++)
			for(c=1;c<=48;c++)
				if(a*5+b*2+c==50)
					n++;
	printf("%d\n",n);
	return 0;
}