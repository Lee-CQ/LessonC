/*"�ж�һ�����Ƿ��ܱ�3��7����,�����ܱ�5����������,���㷵��TRUE,���򷵻�FALSE"*/
#include "stdio.h"

int main ()
{
	int number;
	printf("�ж�һ�����Ƿ��ܱ�3��7����,�����ܱ�5����������,���㷵��TRUE,���򷵻�FALSE\n");
	scanf("%d",&number);
	
	if(number%3==0 && number%7==0 && number%5!=0)
		printf("TRUE\n");
	else
			printf("FALSE\n");

	return 0;
}