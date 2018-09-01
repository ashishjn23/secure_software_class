#include "stdio.h"
#include "string.h"

int main(void) {
  char a[100]="andy is the greatest!\n";
  int x;
  printf("%s",a);
  x=strlen(a);
  printf("length of the string=%d",x);
  return 0;
}
