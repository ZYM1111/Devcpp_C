#include "stdio.h"
#include "math.h"
void main()
{
	double a, b, c, s, area;
    scanf("%lf %lf %lf",&a,&b,&c);
	s = 1/2.0*(a+b+c);
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%7.2g,%7.2g,%7.2g,%7.2g\n",a,b,c,s);
	printf("%7.2f\n",area);
}