#include "kernel.h"
#include "proc.h"
#include "test.c"

int main(){
  init();
  run_test();
  print_processes();
  
  abort1("This is a test!");
}
