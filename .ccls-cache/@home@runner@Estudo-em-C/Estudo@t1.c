#include <stdio.h>

int soma(int a, int b);
int main() {
  int a,b,resultado;
    printf("Digite o número a  :");
    scanf("%d",&a);
    printf("Digite o número b   :");
    scanf("%d",&b);
  resultado=soma(a,b);
  printf("Resultado = %d\n",resultado);
  }

int soma(int a, int b){
  return a+b;
}