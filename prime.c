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
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	printf("������100~200�ڵ�������\n");
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