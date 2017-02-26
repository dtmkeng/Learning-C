#include "stdio.h"
#include "conio.h"
int main()
{
	char c;
	printf("learning 1\n");
	printf("getchar\tgetch\tgetche\n");
	do {
		printf("Enter your Word: ");
		//type
		c = getch();
		//c = getche();
  		//c =getchar();		
	}while(c!='E');
	return 0;
}
