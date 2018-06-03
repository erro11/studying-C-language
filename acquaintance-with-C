#include <stdio.h>
#include <stddef.h> //для подключения wchar_t
int main(void)
{
  printf("the value is-%c-equals %d\n", 'A','A');
  printf("the value is-%s-equals %d\n", "Ss",'S');
  //{ эксперемент
  //printf("the value is-%c-equals %d\n", 'Л','Л');
  //printf("the value is-%s-equals %d\n", 'Й','Й');
  //}
  //определение вещественных констант
  printf("sizeof(2.71 = %d)\n", sizeof(2.71) );
  printf("sizeof(2.71F = %d)\n", sizeof(2.71F) );
  printf("sizeof(2.71L = %d)\n", sizeof(2.71L) );
  printf("sizeof(0. = %d)\n", sizeof(0.L) );
  printf("sizeof(0.1 = %2.4f)\n", sizeof(0.1) );
  printf("sizeof(0.1 = %2.5e)\n", sizeof(0.1 ) );
  //целые констаны
  printf("value is - %i\n", 123);
  printf("value is - %o\n", 123);
  printf("value is - %x\n", 123);
  printf("value is - %i\n", 123);
  printf("value is - %i\n", 0173); //префикс 0*** восьмиричная
  printf("value is - %i\n", 0x7b);//префикс 0x*** шестнадцатеричная
  //символьные констаны
  enum day {sunday, monday, tuesday};
  printf("Dsunday-%d\n", sunday);
  int i = -89;
  printf("o-d-iUsunday-%o---%d---%i\n", sunday,monday,i);
  printf("o-x-xUsunday-%o---%x---%x\n", sunday,monday,i);
  printf("o-d-oUsunday-%u---%d---%o\n", sunday,monday,i);
  printf("okto-Usunday-%i\n", 037777777647);
  printf("sixt-Usunday-%i\n", 0xffffffa7);
  printf("enum-%d\n", sizeof(enum day));
  printf("Dsunday-%d\n", sizeof(sunday));
  printf("Usunday-%u\n", sizeof(sunday));
  printf("j-%u\n", '"'  );
  printf("j-%u\n", 's'  );
//  printf("j-%u\n", '      ENTER после ковычки читает как символ перевода на новую строку
//);printf("asd\n" );

  printf("symbol: %c code: %u\n",'\a', '\a' );
  printf("symbol: %c code: %u\n",'\b', '\b' );
  printf("symbol: %c code: %u\n",'\f', '\f' );
  printf("symbol: %c code: %u\n",'\n', '\n' );
  printf("symbol: %c code: %u\n",'\r', '\r' );
  printf("symbol: %c code: %u\n",'\t', '\t' );
  printf("symbol: %c code: %u\n",'\v', '\v' );
  printf("symbol: %c code: %u\n",'\0', '\0' );
  printf("symbol: %c code: %u\n",' ', ' ' );
  printf("symbol: %c code: %u\n",'\043', '\043' );
  printf("symbol: %c code: %u\n",'\x043', '\x043');
//  printf("symbol: %c code: %u\n",'vsa','vsa'); //результатом будет (a) 7762785
//  printf("symbol: %c code: %u %d\n",'4?=@','4?=@',sizeof('4?=@')); // рез-т  (@) и 876559680
//  printf("symbol: %c code: %u\n",'4?=@','@');
//  printf("symbol: %c code: %u\n",'4?=@2131','12345');
//  printf("symbol: %c code: %x\n",'4?=@2131','12345');
//  printf("sizeof(\'12345\')=%d,symbol- %c", sizeof('12345'),'12345' );
//  printf(", code : %x(16)\n", '12345' );


  printf("char-%d\n",sizeof("char") );
  printf("char-L%d\n",sizeof(L"char") );

  puts("asd \
       dff \
       asd"); // если после '\' нет символа (пробел включительно) то компилятор не читает эту экейп-последовательность
//   printf("asd\
// fgh\
// jkl
//   " ) ;  ощибка

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
