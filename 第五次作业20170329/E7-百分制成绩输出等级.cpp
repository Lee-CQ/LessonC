#include "stdio.h"

int main ()
{
	int score;
	scanf("%d",&score);
	while(true)
	{
		if(score>100||score<0)
			printf("输入一个0-100之间的数\n");
		else 
		{
			switch(score/10)
			{
				case 10:;
				case 9:printf("A\n");break;
				case 8:printf("B\n");break;
				case 7:printf("C\n");break;
				case 6:printf("D\n");break;
				default:printf("E\n");break;
			}
			break;
		}
	}

	return 0;
}