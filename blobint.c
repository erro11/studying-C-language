#include <stdio.h>
#define PRINTD(expre) \
      {printf(#expre"=%d\n",expre);}
#define BASE 66;

int global = 12;
int main()
{
  int result = BASE;
  int sum = global+result+BASE; // не ставить BASE в начало int sum = BASE+global+result; иначе результат будет 66 а не 66+12+66
  int val=12;
  {
    int val = 123;
    puts("first");
    PRINTD(result);
    PRINTD(sum);
    PRINTD(val);
  }

    puts("second");
    PRINTD(result);
    PRINTD(sum);
    PRINTD(val);

  return 0;
}

RESULT
first      
result=66       
sum=144               
val=123                          

second              
result=66              
sum=144            
val=12 

