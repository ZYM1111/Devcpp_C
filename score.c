#include "stdio.h"

void main()
{
	double a;
	printf("\ninput a score:");
	scanf("%lf",&a);
	if(0<=a && a<60)
	{
		printf("E\n");
	}
	else if(60<=a && a<70)
	{
        printf("D\n");
	}
	else if(70<=a && a<80)
	{
		printf("C\n");
	}
	else if(80<=a && a<90)
	{
		printf("B\n");
	}
    else if(90<=a && a<=100)
	{
		printf("A\n");
	}
	else
	{
		printf("beyond range\n");
	}
}