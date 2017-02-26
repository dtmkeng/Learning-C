#include "stdio.h"
int day();
struct employ {
 char name[20];
 char pos[20];
 int age;   
 }emp2;
   struct employ emp={
   	"keng","Doctor",19
   };
    
   
main(){
  
 day();
  
}
int day()
{
printf("Hello sunday");
printf("name : %s\nposition: %s\nage: %d\n",emp.name,emp.pos,emp.age);
}
  

