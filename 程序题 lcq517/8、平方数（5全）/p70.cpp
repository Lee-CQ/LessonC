#include"stdio.h"
#include"math.h"

bool Sqrt_0(int x)
{
	int a;
	a=sqrt(x);
	if(a*a==x)
		return true;
	else
		return false;
}
int main()
{
	int a,b,c,d,x,j=1,y,sum=0;
	for(x=1000;x<=9999;x++)
	{
	    if(Sqrt_0(x))
    	{
    	    a=x/1000;
    		b=x%1000/100;
    		c=x%100/10;
    		d=x%10;
    		if(Sqrt_0(a+b+c+d))
    	        if(j<=10)
    	        {
    	            sum+=x;
    	            j++;
    	        }
    	        else
    	            break;
    	}
	}
	printf("%d\n",sum);
	return 0 ;
}