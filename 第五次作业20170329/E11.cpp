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
	case 'a':case'A':printf("����\n");break;
	case 'b':case'B':printf("����\n");break;
	case 'c':case'C':printf("����\n");break;
	case 'd':case'D':printf("������\n");break;
	default:printf("������\n");break;
	}
	

	return 0;
}
