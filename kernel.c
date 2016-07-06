#include "kernel.h"
#include "defs.h"
#include "proc.h"
#include "test.c"
#include "scheduler.c"

int main(){
  init();
  run_test();
  print_processes();
  scheduler();

  //abort1("This is a test!");
}
