/* natanjmai
 *
 * This file contains the process structures and functions.
 */

typedef struct {
  int id;
  void(*function)(void);
  int state;
} proc;

typedef struct {
  int next_index;
  int next_pid;
  proc *proc_list[MAX_PROCESS];
} proc_table;

static proc_table *ptable;
static proc *p;

void print_processes(){
  int q;

  printf("\n");

  for(q = 0; q < ptable->next_index; q++)
    printf("ID - STATE -> %d - %s\n", ptable->proc_list[q]->id, states[ptable->proc_list[q]->state]);

  printf("\n-------------------------- \n");
}

void init(){
  ptable = (proc_table *) malloc(sizeof(proc_table));

  ptable->next_index = 0;
  ptable->next_pid   = 0;
}

void insert_to_ptable(proc *p){
  ptable->proc_list[ptable->next_index] = p;
  ptable->next_index++;
  ptable->next_pid++;
}

void create_process(void(*function)(void)){
  p = (proc *) malloc(sizeof(proc));

  p->function = function;
  p->state    = READY;
  p->id       = ptable->next_pid;
  insert_to_ptable(p);

  p = NULL;
}
