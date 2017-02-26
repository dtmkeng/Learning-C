#include "stdio.h"
int main()
{
	char word[20],p2,p4;
	printf("Enter 5 chareater: ");
	scanf("%s",word);
	p2=word[1]+1;
	p4=word[3]+1;
	printf("%c%c%c%c%c",word[0],p2,word[2],p4,word[4]);
}
