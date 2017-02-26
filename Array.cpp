#include "stdio.h"
{
	
	int age[10];
	//check size array 
	printf("Size array age is %d byte\n",sizeof(age));
	//add data array
	//age[0] = 15;
	//printf("age is : %d",age[0]);
	printf("Enter you age: ");
	scanf("%d",&age[0]);
	printf("age is : %d",age[0]);	
}
