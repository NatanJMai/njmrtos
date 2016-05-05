#include <stdio.h>
#include <stdlib.h>
#include "proc.h"

int main(){
  proc *pc;
  
  int(*ptrFuc)(void);

  pc = malloc(sizeof(proc));
  pc->a = 1;
  pc->b = 2;

  ptrFuc = &f;
  
  int c;
  c = (*ptrFuc)();

  printf("%d\n%d\n", pc->a, pc->b);
  return 0;
}

