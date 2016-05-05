/* Natan J. Mai
 * 
 * This file contains the process' structures and functions.
 * */

typedef struct {
  int a;
  int b;
  int (*function)(void);

} proc;

int f(){
  printf("F\n");
}

