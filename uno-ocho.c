#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int horas_trabajadas = atoi(argv[1]);
  int salario_hora = atoi(argv[2]);
  printf("%d\n", horas_trabajadas * salario_hora);
  return 0;
}
