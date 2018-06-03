#include <stdio.h>
#define READF(VARA) \
      {printf(#VARA"="); scanf("%e", &VARA);}
#define READD(VARA) \
      {printf(#VARA"="); scanf("%le", &VARA);}
#define READI(VARA) \
      {printf(#VARA"="); scanf("%d", &VARA);}

#define PRINTF(A) \
          printf(#A"=%f\n", A)

#define PRINTD(A) \
          printf(#A"=%e\n", A)

#define PRINTI(A) \
          printf(#A"=%d\n", A)

int main()
{
  float val;
  double mem;
  int sing;
  READF(val);
  PRINTF(val);
  READD(mem);
  PRINTD(mem);
  READI(sing);
  PRINTI(sing);
  return 0;
}
result 

val=1 
val=1.000000
mem=2
mem=2.000000e+000                             
sing=3
sing=3 
