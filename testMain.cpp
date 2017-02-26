#include"stdio.h"
int a=1;
int test();
main()
{
	static int b=2;
	int d=0;
	d=test();
	d=d*b;
	b++;
	d=test();
	d=d*b;
	printf("d= %d",d);
}
int c=1;
extern int a;
int test()
{
	c++;
	return a+c;
}
