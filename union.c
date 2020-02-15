#include <stdio.h>

struct 
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int banji;
		char position[10];
	}category;
}person[2];

int main(void)
{
	int i;
	for(i = 0;i < 2;i++)
	{
		printf("please enter num :");
		scanf("%d",&person[i].num);
		printf("please enter name :");
		scanf("%s",&person[i].name);
		fflush(stdin);
		printf("please enter sex(m/f) :");
		scanf("%c",&person[i].sex);
		fflush(stdin);
		printf("please enter job(s/t) :");
		scanf("%c",&person[i].job);
		if(person[i].job == 's')
		{
			printf("please enter class :");
			scanf("%d",&person[i].category.banji);
		}
		else if(person[i].job == 't')
		{
			printf("please enter position  :");
			scanf("%s",&person[i].category.position);
		}
		else
		{
			printf("ÊäÈë´í");
		}
	}
	printf("NO.		name	sex		job		class/position\n");
	for(i = 0;i<2;i++)
	{
		if(person[i].job == 's')
		{
			printf("%d		%s		%c		%c		%d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.banji);
		}
		else if(person[i].job == 't')
		{
			printf("%d		%s		%c		%c		%s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
		}
		else
		{
			printf("ÊäÈë´í");
		}
	}
	return 0;
}

