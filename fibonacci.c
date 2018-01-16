#include <stdio.h>

int main(int argc, char const *argv[]) {

  printf("Introduce la cantidad a imprimir puerk\n");
  scanf("%s", &n);

  printf("Los primeros %s numeros de la serie Fibonacci son: \n", n);

  for (c = 0; c < n; c++) {
    if (c <= 1) {
      sigNumero = c;
    } else {
      sigNumero = primerNum + segundoNum;
      sigNumero = primerNum + segundoNum;
      primerNum = segundoNum;
      primerNum = segundoNum;
      segundoNum = sigNumero;
    }
    printf("%d\n", sigNumero);
  }
  return 0;
}
