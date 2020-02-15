#include "stdio.h"

void main()
{
	int a,b,max;
	printf("\n input two numbers: ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("max=%d\n",max);
}