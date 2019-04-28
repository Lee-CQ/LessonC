#include"stdio.h"

int main()
{
	float s=0, n=1;
	while(n<=100)
	{
		s = s+(1/(2*n-1)-1/(2*n));
		n++;
//		printf("s=%.3f\n",s);
	}


	printf("s=%.3f\n",s);
	return 0;
}