#include"stdio.h"
int main()
{
    int n=1;
	float s=0;
	for(;n<=500;n++)
	{
		if(n%5==0||n%9==0)
			s = s + (1/(float)(n)) ;
	}
	printf("%.2f\n",s);
	return 0;
}