#include"stdio.h"

int main()
{
	char x;
	printf("应该输入一个小写字母:");
	while( true )
	{
		scanf("%c",&x);
		if(x>=97&&x<=122)
		{
			x= x-32;
			printf("大写为%c\n",x);
			break;
		}
		else
			printf("你的输入有误,请重新输入\n");
	}

	return 0;
}