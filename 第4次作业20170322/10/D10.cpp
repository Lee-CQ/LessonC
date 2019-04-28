#include "stdio.h"

int main()
{
	int x,y,z;
	x=y=z=0;
	++x||++y&&++z;
	printf("x=%d\ty=%d\tz=%d\n",x,y,z);
	x=y=z=0;
	++x&&++y||++z;
	printf("x=%d\ty=%d\tz=%d\n",x,y,z);
	x=y=z=0;
	++x&&++y&&++z;
	printf("x=%d\ty=%d\tz=%d\n",x,y,z);
	x=y=z=-1;
	++x&&++y&&++z;
	printf("x=%d\ty=%d\tz=%d\n",x,y,z);
	x=y=z=-1;
	++x||++y&&++z;
	printf("x=%d\ty=%d\tz=%d\n",x,y,z);
	return 0;
}