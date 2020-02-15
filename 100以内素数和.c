#include "stdio.h"
#include "math.h"
void main()
{
	int m,n,i;
	int s=5; 
	for(m = 5;m<101;m++)
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
			s = s + m;
		}
	}
	printf("%d",s);
}
