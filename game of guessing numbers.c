#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand();
	number = number % 10;
	int a = 0;
	int count = 0;
	printf("我已经想好了一个数\n");
	do
	{
		printf("请输入一个数：");
		scanf("%d",&a);
		count++;
		if(a> number)
		{
			printf("\n你猜的太大了"); 
		}
		else if(a< number)
		{
			printf("\n你猜的太小了");
		}	
	}while(a != number);
	printf("\n你用了%d次猜出了答案\n",count);

	return 0; 
}
