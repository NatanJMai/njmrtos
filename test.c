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
  printf("\n1\n");
}

void pf2(){
  printf("\n2\n");
}

void pf3(){
  printf("\n3\n");
}

void pf4(){
  printf("\n4\n");
}

void pf5(){
  printf("\n5\n");
}

void pf6(){
  printf("\n6\n");
}

void pf7(){
  printf("\n7\n");
}
