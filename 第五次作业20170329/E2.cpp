#include"stdio.h"

int main()
{
	char x;
	printf("Ӧ������һ��Сд��ĸ:");
	while( true )
	{
		scanf("%c",&x);
		if(x>=97&&x<=122)
		{
			x= x-32;
			printf("��дΪ%c\n",x);
			break;
		}
		else
			printf("�����������,����������\n");
	}

	return 0;
}