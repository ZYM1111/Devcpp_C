#include <stdio.h>

int main()
{
	int i,j,k,num=0;
	printf("\n");
	for(i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			for(k=1;k<5;k++)
			{
				if(i!=j && j!=k && i!=k)
				{
			    	printf("%d%d%d\n",i,j,k);
			    	num++;
			    }
			}
		}
	}
	printf("total number:%d",num);
}