#include"stdio.h"

int main ()
{	
	int day;
	while(true)
	{
		scanf("%d",&day);
		if(day>=0&&day<=6)
			break;
		else
			printf("Eorro,please try again:");\
	}

	switch(day)
	{
	case 1:printf("Monday\n");break;
	case 2:printf("Tuesday\n");break;
	case 3:printf("Wednesday\n");break;
	case 4:printf("Thursday\n");break;
	case 5:printf("Friday\n");break;
	case 6:printf("Saturday\n");break;
	default:printf("Sunday\n");break;
	}
	return 0;
}