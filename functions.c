#include "stdio.h"

int square(int a){
    int x;
    x=a*a;
  return x;
}


int main() {
  int i=4;
  int x;
  x=square(i);
  printf("%d",x);
  return 0;
}