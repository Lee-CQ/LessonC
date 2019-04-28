/*"判断一个数是否能被3或7整除,但不能被5整除的条件,满足返回TRUE,否则返回FALSE"*/
#include "stdio.h"

int main ()
{
	int number;
	printf("判断一个数是否能被3或7整除,但不能被5整除的条件,满足返回TRUE,否则返回FALSE\n");
	scanf("%d",&number);
	
	if(number%3==0 && number%7==0 && number%5!=0)
		printf("TRUE\n");
	else
			printf("FALSE\n");

	return 0;
}