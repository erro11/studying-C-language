#include <stdio.h>
#define PRINTF(A) \
        printf(#A"=%f\n", A)

#define PRINTD(A) \
        printf(#A"=%e\n", A)

#define PRINTI(A) \
        printf(#A"=%d\n", A)

int main() {

  PRINTF(33.22f );
  PRINTF(33.22 );
  PRINTD(33.22 );
  PRINTI(33322);
  return 0;
}


result
33.22f=33.220001
33.22=33.220000     
33.22=3.322000e+001 
33322=33322   
