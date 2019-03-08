#include <stdio.h>
#include <time.h>

int main() {

int i = 0;

struct timespec TheWorld;
TheWorld.tv_sec = 0;
TheWorld.tv_nsec = 700* 1000* 1000;

for (i = 0; i < 3; i++) {
  printf(" * \n", NULL);
  nanosleep(&TheWorld, NULL);
}

  return 0;
}
