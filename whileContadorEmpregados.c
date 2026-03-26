#include <stdio.h>
#include <stdlib.h>

/* 
Escreva um algoritmo em C que leia de 10.000 habitantes de uma pequena cidade se está empregado ou não e exiba em porcentagem a quantidade de empregados e empregados desta pequena cidade.
Utilizando while + contador
*/

int main()
{
    int contador = 0, status, empregados = 0, desempregados = 0;
    float porcentagemE, porcentagemD;

    printf("Relatório de empregados e desempregados\n");
    printf("Insira '0' caso o habitante estiver desempregado e '1' caso for empregado.\n");
  
    while (contador < 10000) {
      printf("\nHabitante %i(0/1): ", contador+1);
      scanf("%i", &status);
      
      if (status > 1 || status < 0) {
        printf("Insira um valor válido");
      }
      else {
        if (status != 0) {
          empregados++;
        }
        else {
          desempregados++;
        }
        ++contador;
      }   
    }

    porcentagemE = (empregados * 100.00) / 10000;
    porcentagemD = (desempregados * 100.00) / 10000;
  
    printf("\nEmpregados: %i\n", empregados);
    printf("Porcentagem: %.2f%\n", porcentagemE);

    printf("\nDesempregados: %i\n", desempregados);
    printf("Porcentagem: %.2f%\n", porcentagemD);
  
    return 0;
}
