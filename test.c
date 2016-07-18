/* natanjmai
 *
 * File to implement some tests
 */

void create_processes_test();
void run_test();
void pf0();
void pf1();
void pf2();
void pf3();
void pf4();
void pf5();
void pf6();

void run_test(){
  //create_processes_test();
}

void create_processes_test(){
  create_process(pf0);
  create_process(pf1);
  create_process(pf2);
  create_process(pf3);
  create_process(pf4);
  create_process(pf5);
  create_process(pf6);
}

void pf0(){
  printf("Function Test 0\n");
}

void pf1(){
  printf("Function Test 1\n");
}

void pf2(){
  printf("Function Test 2\n");
}

void pf3(){
  printf("Function Test 3\n");
}

void pf4(){
  printf("Function Test 4\n");
}

void pf5(){
  printf("Function Test 5\n");
}

void pf6(){
  printf("Function Test 6\n");
}
