/* natanjmai
 *
 * File to implement some tests
 */

void create_processes_test();
void run_test();
void pf1();
void pf2();
void pf3();
void pf4();
void pf5();
void pf6();
void pf7();

void run_test(){
  create_processes_test();
}

void create_processes_test(){
  create_process(pf1);
  create_process(pf2);
  create_process(pf3);
  create_process(pf4);
  create_process(pf5);
  create_process(pf6);
  create_process(pf7);
}

void pf1(){
  printf("\nFunction Test 1\n");
}

void pf2(){
  printf("\nFunction Test 2\n");
}

void pf3(){
  printf("\nFunction Test 3\n");
}

void pf4(){
  printf("\nFunction Test 4\n");
}

void pf5(){
  printf("\nFunction Test 5\n");
}

void pf6(){
  printf("\nFunction Test 6\n");
}

void pf7(){
  printf("\nFunction Test 7\n");
}
