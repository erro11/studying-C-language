#include <stdio.h>
#include <limits.h>//CHAR_BIT(ЧИСЛО БИТОВ В БАЙТЕ).INT_MIN(МИНИМАЛЬНОЕ ЗНАЧЕНИЕ ДЛЯ ДАННЫХ ТИПА INT)
#include <float.h>//тоже , что и limits, только для вещественных значений
#define PI 3.14
#define PROVERB "GoodAfternooN"
int main() {
  puts(PROVERB);
  printf("sizeof(PROVERB)=%d\n", sizeof(PROVERB));  //14
  printf("sizeof()=%d\n", sizeof("GoodAfternooN") );//14

  #undef PROVERB
  #define PROVERB "GoodNight"
  puts(PROVERB);
  /*
  Если убрать #undef **** то будет предупреждение от компилятора .
  Рез-т препроцессорной обработки пройдет успешно.
  И результаты выполненой программы будут верны.
  */

  printf("\nCHAR_BIT=%d\n", CHAR_BIT );
  printf("\nSCHAR_BIT=%d\t\tSCHAR-max=%d\n", SCHAR_MAX , SCHAR_MIN );
  printf("\nUCHAR_BIT=%d\n", UCHAR_MAX );
  printf("\nINT_MIN=%d\tINT_MAX=%d\n", INT_MIN, sizeof(INT_MAX) );
  printf("\nLONG_BIT=%ld\tLONG_MAX=%ld\n", LONG_MIN, LONG_MAX);


    printf("\nFLT_EPSILON=%e\n", FLT_EPSILON );
    printf("\nDBL_EPSILON=%e\n", DBL_EPSILON );
    printf("\nFLT_MAX=%e\t\tFLT_MIN=%e\n", FLT_MAX , FLT_MIN );
    printf("\nDBL_MAX=%e\n",  DBL_MAX );
    printf("\nFLT_MANT_DIG=%d\n", FLT_MANT_DIG );
    printf("\nDBL_MANT_DIG=%ld\n", DBL_MANT_DIG);

  return 0;
}


then start #cmd 
or
#terminal gnu/linux
#gcc nameOFfile.c -o nameOFfile.exe

if we whant preprocessing , use 
#gcc -E nameOFfile.c -o nameOFfile.i

then 

#gcc nameOFfile.i -o nameOFfile.exe
