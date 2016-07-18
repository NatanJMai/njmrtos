/* natanjmai
 *
 * This file contains the scheduler's functions.
 */

#define test 3000000

void scheduler(){
  int p, t = 0;
  proc *prc = NULL;

  while(t < test){
    for(p = 0; p < ptable->next_index; p++){
      prc = ptable->proc_list[p];

      if (prc->state == READY) break;
    }

    if (prc->state == READY){
      prc->state = RUNNING;
      printf("\nPROCESS Running -> %d\n", prc->id);
      prc->function();
      prc->state = FINISHED;
    }

    t++;
  }

  print_processes();
}
