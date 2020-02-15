#include <stdio.h>

#define NUM 3

void main()
{
	int i;
	struct person
	{
		char name[20];
		char num[11];
	};
	struct person man[NUM];
	for(i=0;i<NUM;i++)
	{
		printf("please input name:\n");
		gets(man[i].name);
		printf("please input phone number:\n");
		gets(man[i].num);
	}
	printf("\t\t\t\tname\t\t\tphone\n");
	for(i=0;i<NUM;i++)
	{
		printf("\t\t\t\t%s\t\t\t%s\n",man[i].name,man[i].num);
	}
}