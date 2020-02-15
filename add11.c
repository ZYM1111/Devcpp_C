#include "stdio.h"

void main()
{
	int x = 5;
	int j = 5;
	int p;
	int q;
	p = (x++)+(x++)+(x++);
	q = (++j)+(++j)+(++j);
	printf("%d,%d,%d,%d",p,q,x,j);
}