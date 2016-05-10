/* natanjmai
 * 
 * This file contains the process structures and functions.
 */

#include "defs.h"

typedef struct {
  int id;
  void(*function)(void);
  unsigned int state;
} proc;

typedef struct {
  int next_index;
  int next_pid;
  proc proc_list[MAX_PROCESS];
} proc_table;

proc_table *ptable;

void print_processes(){
  int p;

  char *states[] = {
    [READY]     "READY",
    [BLOCKED]   "BLOCKED", 
    [RUNNING]   "RUNNING"
  };

  printf("\n");
  for(p = 0; p < ptable->next_index; p++)
    printf("plist %d - %s\n", ptable->proc_list[p].id, states[ptable->proc_list[p].state]);

  printf("\n -------------------------- \n");

}

void init(){
  ptable = malloc(sizeof(ptable));

  ptable->next_index = 0;
  ptable->next_pid   = 1;
}

void insert_to_ptable(proc *p){
  ptable->proc_list[ptable->next_index] = *p;
  ptable->next_index++;

  printf("Test insert_to_ptable proc %d\n", ptable->proc_list[ptable->next_index - 1].id); 

}

void create_process(void(*function)(void)){
  proc *p;

  p = malloc(sizeof(p));
  p->function = function;
  p->state    = READY;
  p->id       = ptable->next_pid;
  
  insert_to_ptable(p);

  ptable->next_pid++;
}


