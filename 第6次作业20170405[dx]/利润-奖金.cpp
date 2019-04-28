#include"stdio.h"

int main()
{
	int profit; float bonus;
	scanf("%d",&profit);
	switch(profit/100000)
	{
	case 0:bonus = profit*0.1;break;
	case 1:bonus = profit*0.12;break;
	case 2:
	case 3:bonus = profit*0.14;break;
	case 4:
	case 5:bonus = profit*0.6;break;
	case 6:
	case 7:
	case 8:
	case 9:bonus = profit*0.18;break;
	default:bonus = profit*0.2;break;
	}

	printf("当前利润为%d,奖金为%f\n",profit,bonus);
	return 0;
}