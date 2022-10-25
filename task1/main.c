#include <stdio.h>
#include <math.h>
int main()
{
	double a,xn=0,y1,y0;
	scanf("%lf",&a);
	y0=a;
	for(int i=0;i<100000000;i++)
	{
		y1=y0*0.999;
		xn+=0.001;
		printf("xn=%lf\t yn=%lf\n",xn,y1);
		if(y0-y1<=0.000001)
		{
		printf("the approximate answer is %lf",y1);
		break;
		}
     	y0=y1;
		
	}
	return 0;
	
}
