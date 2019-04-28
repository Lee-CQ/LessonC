/*判断一个数是否是奇数*/

#include "stdio.h"

int main()
{
	int number;
	scanf("%d",&number);
	if(number%2 != 0)
		printf("这数是奇数\n");
	else
		printf("这数不是奇数\n");

	return 0;
}
