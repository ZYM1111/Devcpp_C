#include "stdio.h"

void main()
{
	int a,b,max;
	printf("\n input two numbers: ");
	scanf("%d%d",&a,&b);
	max = b;
	if(max<b)
	{
		max = b;
	}
	printf("max=%d\n",max);
}