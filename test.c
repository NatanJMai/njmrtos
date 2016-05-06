/* natanjmai
 *
 * File to implement some tests
 */

#include <stdio.h>
#include <stdlib.h>
#include "proc.h"

  
int main(){
  proc *pc;
  
  pc = malloc(sizeof(proc));
  pc->id = 1;
  pc->state = READY;

  pc->function = &f;
  
  (pc->function)();

  printf("%d\n", pc->id);
  return 0;
}

