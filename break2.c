#include "stdio.h"
#include "conio.h"
void main()
{
	char c;
	while(1)
	{
		c = getch();
		if(c == 13)
		{
			continue;
		}
		if(c == 27)
			break;
		putch(c);
	}
	getch();
}