#include"stdio.h"

int main ()
{
	char z;
	while(true)
	{
		scanf("%c",&z);
		if(z>=65&&z<=68 || z>=97&&z<=100)
			break;
		else
			printf("erorr,Please try again:");
	}
	switch(z)
	{
	case 'a':case'A':printf("优秀\n");break;
	case 'b':case'B':printf("良好\n");break;
	case 'c':case'C':printf("及格\n");break;
	case 'd':case'D':printf("不及格\n");break;
	default:printf("不及格\n");break;
	}
	

	return 0;
}
