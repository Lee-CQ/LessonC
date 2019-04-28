#include"stdio.h"

main()
{
	int a,b;
	float x,y;
	char c1,c2;
							//	printf("输入a=..,b=..\n");
	scanf("a=%d b=%d",&a,&b);
							//	printf("输入两个浮点数,用逗号隔开\n");
	scanf("%f %e",&x,&y);
							//	printf("输入两个字符,不用逗号隔开");
	scanf("%c %c",&c1,&c2);
	printf("a=%d,b=%d\nx=%f,y=%f\nc1=%c,c2=%c\n",a,b,x,y,c1,c2);
}
