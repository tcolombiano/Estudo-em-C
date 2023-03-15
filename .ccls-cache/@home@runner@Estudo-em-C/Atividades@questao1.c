#include <stdio.h>

int main(void) {
    //Crie um programa que leia um número n de idades, e imprima a todas idades maior que a média delas//
int icont;
  int n;
  puts("informe quantas idades deseja adicionar:");
  scanf("%i",&n);
    int idades[n];
  for(icont = 0;icont < n;icont++){
    puts("informe sua idade:");
    scanf("%i",&idades[icont]);
  }
  
  return 0;
}