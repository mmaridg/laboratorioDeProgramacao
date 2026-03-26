/*

Escreva um algoritmo em C que leia de 10.000 habitantes de uma pequena cidade se está empregado ou não e exiba em porcentagem a quantidade de empregados e empregados desta pequena cidade.

while + contador

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    int totalEmpregados = 0, totalNaoEmpregados = 0, status;
    float percEmpreg, percNaoEmpreg;
    char nome[50];

  
    FILE *arquivo = fopen("dados.txt","r"); //'r' = read
    if (arquivo == NULL) {
      printf("Erro ao criar o arquivo.\n");
      return 1; 
    }

  printf("Empregados e Desempregados da Grande Vitória\n\n");

  while (fscanf(arquivo, "%s %i", nome, &status) != EOF) {
    // Enquanto o fscanf conseguir ler dados e NÃO esbarrar no Fim do Arquivo,
    // o laço continua rodando.
    if(status == 1){
      ++totalEmpregados;
      printf("%s - empregado\n", nome);
    }
    else {
      ++totalNaoEmpregados;
      printf("%s - desempregado\n", nome);
    }
  }
  fclose(arquivo);
  
    percEmpreg = (totalEmpregados * 100.0) / (totalEmpregados + totalNaoEmpregados); //coloco o .0 para garantir a precisao decimal da porcentagem
    percNaoEmpreg = (totalNaoEmpregados * 100.0) / (totalEmpregados + totalNaoEmpregados);
    printf("\nTotal de Empregados: %i\n", totalEmpregados);
    printf("Total de Desempregados: %i\n\n", totalNaoEmpregados);
    printf("Porcentagem de Empregados: %.2f%%\n", percEmpreg);
    printf("Porcentagem de Desempregados: %.2f%%\n", percNaoEmpreg);
    
    if(status)
    return 0;
}
