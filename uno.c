#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  double theta = atof (arg[1]);
  printf("%f\n", cos(theta) + sin(theta) * sin(theta));
  return 0;
}
