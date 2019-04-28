#include"stdio.h"

main()
{
	float f,t;
	printf("Please entry a Fahrenheit:");
	scanf("%f",&f);
	t = (float)5/9*(f-32);
	printf("The Fahrenheit(%.1f) change to degree centigrade is %.1f\n",f,t);
	return 0;
}
