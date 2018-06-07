#include <stdio.h>
#define PRINTI(expre) \
;printf("the value of "#expre"=%d\n", expre);
int main()
{
  PRINTI(5<6);
  PRINTI(1>6);
  PRINTI(5!=6);
  PRINTI(5==6);
  PRINTI(3<6);
  PRINTI(41<6);
  PRINTI(5==5);
  PRINTI(!2);
  PRINTI(!(6<2));
  PRINTI(!6<0);
  PRINTI(!6<2);
  return 0;
}

result 


the value of 5<6=1         
the value of 1>6=0             
the value of 5!=6=1           
the value of 5==6=0       
the value of 3<6=1             
the value of 41<6=0      
the value of 5==5=1  
the value of !3=0
the value of !6<2=1
the value of !6<0=0                 
the value of !6<2=1 
