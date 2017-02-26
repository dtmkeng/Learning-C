#include "stdio.h"
#include "conio.h"
int main()
{	
	//chang num[0]and num[3]
	int num[10]={1,2,3,4,5},ch_num,i;
	ch_num=num[0];
	num[0]=num[3];
	num[3]=ch_num;
	//loop data array 
	for (i=0;i<9;i++){
	printf("%d\t",num[i]);
	}
}	
