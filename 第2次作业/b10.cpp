#include"stdio.h"

main()
{
	char c[5];
	for(int i=0;i<5;i++)
	{
		scanf("%c",&c[i]);
		c[i] = c[i]+4;
		printf("%c",c[i]);
	}
	printf("\n");
}