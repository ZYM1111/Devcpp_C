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
	printf("���Ѿ������һ����\n");
	do
	{
		printf("������һ������");
		scanf("%d",&a);
		count++;
		if(a> number)
		{
			printf("\n��µ�̫����"); 
		}
		else if(a< number)
		{
			printf("\n��µ�̫С��");
		}	
	}while(a != number);
	printf("\n������%d�β³��˴�\n",count);

	return 0; 
}
