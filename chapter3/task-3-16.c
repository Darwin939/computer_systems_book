#include <stdio.h>

void cond(long a, long *p){
  if (p && a > *p) {
    goto point;
  }
  point:
    *p = a;
}


