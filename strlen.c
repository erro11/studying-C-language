#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
int main(void)
{
  char buffer[256];
  printf("ENTER ur name and press <ENTER>:\n");
  gets(buffer);
  printf("\nUr name has %d characters and spaces", strlen(buffer));
  return 0;
}
