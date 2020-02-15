#include "stdio.h"
#include "math.h"
void main()
{
	int m,n,i;
	scanf("%d",&m);
	n = sqrt(m);
	for(i = 2;i<=n;i++)
	{
		if(0 == m%i)
		{
			break;
		}
	}
	if(i>n)
	{
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	printf("下面是100~200内的素数：\n");
	for(m=100;m<=200;m++)
	{
		n = sqrt(m);
		for(i = 2;i<=n;i++)
		{
			if(0 == m%i)
			{
				break;
			}
		}
		if(i>n)
		{
			printf("%d\n",m);
		}
	}
}