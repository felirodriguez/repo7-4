#include <stdio.h>
#include <stdlb.h>

int main(int argc, char *argv[]) {
  int a = atoi (argv[1]);
  int b = atoi (argv[2]);
  int r = (rand() % (b - a + 1));

  return 0;
}
