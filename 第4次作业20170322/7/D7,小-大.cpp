/*≈≈–Ú*/
#include "stdio.h"

int main()
{
	int a[5],x;
	printf ("please entry 5 number (separator (,)).\n");
	scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for (int j=0;j<5;j++)
	{
		for (int i=0;i<5;i++)
		{
			if(a[i]>a[i+1])
			{
				x=a[i];a[i]=a[i+1];a[i+1]=x;
			}
		}
	}
	printf("%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4]);
	return 0;
}
