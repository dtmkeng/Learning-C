#include "stdio.h"
int main()
{
	int num[20],i;
	for (i=0;i<10;i++)
	{   
		num[i]=0;
		printf("Enter you Number %d: ",i+1);
		scanf("%d",&num[i]);	
	}
}
