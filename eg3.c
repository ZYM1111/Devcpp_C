#include <stdio.h>
#include <math.h>

int main()
{
	int x,m,n,i,j;  
	for(j = 2;j<=(168/2);j = j+2)
	{
		if((168/j)%2 == 0 && (168/j)*j == 168)
		{
			i = 168/j;
		}
		else
		{
			continue;
		}
		n = 0.5*(i+j);
		m = 0.5*(i-j);
		x = m*m-100;
		if(m == sqrt(m*m) && n == sqrt(n*n))
		{
			printf("i = %d j = %d\n",i,j);
			printf("%d+100=%d\n%d+100+168=%d\n",x,m*m,x,n*n);
		}
	}
	return 0;
}
