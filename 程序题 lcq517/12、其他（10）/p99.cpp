#include"stdio.h"

int main()
{
	int x;
	for(x=7;x<=999;x++)
	if(x%2==1&&x%3==2&&x%4==3&&x%5==4&&x%6==5&&x%7==0)
		break;
	printf("x=%d\n",x);
	return 0;
}