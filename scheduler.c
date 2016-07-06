/* natanjmai
 *
 * This file contains the scheduler's functions.
 */

#define test 3000

void scheduler(){
  int p, t = 0;
  proc *prc = NULL;

  while(t < test){
    for(p = 0; p < 1; p++){
      prc = ptable->proc_list[p];

      if (prc->state == READY) break;
    }

    if (prc->state == READY){
      prc->state = RUNNING;
      prc->function();
    }

    t++;
  }
}
