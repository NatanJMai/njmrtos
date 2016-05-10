#include <stdlib.h>
#include <stdio.h>

void abort1(char *msg){
  printf("ERROR - %s\n", msg);
  abort();
}
