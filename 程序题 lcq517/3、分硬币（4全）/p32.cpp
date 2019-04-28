#include"stdio.h"

int main()
{
	int a,b,c,n=0;//a Îå£»b Á½ £»c Ò»£»
	for(a=0;a<=10;a++)
		for(b=0;b<=25;b++)
			for(c=0;c<=50;c++)
				if(a*5+b*2+c==50)
					n++;
	printf("%d\n",n);
	return 0;
}