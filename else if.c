#include "stdio.h"

void main()
{
     char c,d;
	 printf("input a character:   ");
	 c = getchar();
	 if(c<32)
	 {
		 printf("this is a control character\n");
	 }
	 else if(c>='0'&&c<='9')
	 {
		 printf("this is a digit\n");
	 }
	 else if(c>='a'&&c<='z')
	 {
		 printf("this is a small letter\n");
	 }
	 else if(c>='A'&&c<='Z')
	 {
		 printf("this is a capital letter\n");
	 }
	 else 
	 {
		 printf("this is an other character\n");
	 }
	 d = '!';
	 printf("%d",d);

}