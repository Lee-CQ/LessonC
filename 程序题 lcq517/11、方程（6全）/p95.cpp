#include"stdio.h"
int main()
{
	int x,y,n=0;
	for(x=-100;x<=100;x++)
		for(y=-50;y<50;y++)
			if(9*x-19*y==1)
				n++;
		
	printf("%d\n",n);
	return 0;
}