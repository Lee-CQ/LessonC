#include"stdio.h"

int main()
{
	int number;
	scanf("%d",&number);
	if(number%3==0 && number%7!=0  ||  number%5==0 && number%9!=0)
		printf("满足条件\n");
	else
		printf("不满足条件\n");
	return 0;
}