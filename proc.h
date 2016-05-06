/* natanjmai
 * 
 * This file contains the process' structures and functions.
 */

#include "defs.h"

typedef struct {
  int id;
  int(*function)(void);
  unsigned int state;
} proc;

typedef struct {
  int next_index;
  proc *proc_list[MAX_PROCESS];
} ptable;


int f(){
  printf("r\n");
}

