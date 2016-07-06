/* natanjmai
 *
 * List of possible states.
 * */

#define MAX_PROCESS 10

#define READY   0
#define BLOCKED 1
#define RUNNING 2

char *states[] = {
  [READY]     "READY",
  [BLOCKED]   "BLOCKED",
  [RUNNING]   "RUNNING"
};
