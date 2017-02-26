#include "stdio.h"
int main()
{
	int i,j,sum;
	printf("Enter number factorail: ");
	scanf("%d",&j);
	for(i=j;i>=1;i--){
	   sum*=i;
	   printf("%d!x",i);	        
	}
	printf("\n%d",sum);
}
