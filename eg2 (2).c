#include<stdio.h>

#define W 10000
int main()
{
	long int l,r;
	pritf("please input interest: ");
	scanf("%ld",&l);
		if(l<=10*W)
		{
			r = 0.1*l;
		}
		else if(l<20*W)
		{
			r = W + 0.075*(l-10*W);
		}
		else if(l<40*W)
		{
			r = W + 0.75*W + 0.05*(l-20*W);
		}
		else if(l<60*W)
		{
			r = W + 0.75*W + W + 0.03*(l-40*W);
		}
		else if(l<100*W)
		{
			r = 3.35*W + 0.015*(l-60*W);
		}
		else 
		{
			r = 3.35*W + 0.6*W + 0.01*(l-100*W); 
		}
		printf("reward total : %ld\n",r);
	return 0;
}