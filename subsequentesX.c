#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, contador = 0;

  printf("20 subsequentes de x\n");
  printf("Insira um número inteiro: \n");
  scanf("%i", &num);
  
  if (num != (int)num) 
    printf("Número inválido. Insira um número inteiro\n");

  else {
    printf("Subsequentes de %i: \n", num);
      for(contador = num; contador <= 20; contador++){
        num++;
        printf("%i\n", num);
      } 
    }
    return 0;
}
