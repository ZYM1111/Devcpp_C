#include "stdio.h"

void main()
{
	int a,b,c,d=0;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=4;b++)
		{
			if(b!=a)
			{
				for(c=1;c<=4;c++)
				{
					if(c!=a && c!=b)printf("%d%d%d\n",a,b,c);d++;
				}
			}
		}
	}
	printf("%d",d);
}