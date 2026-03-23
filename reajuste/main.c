#include <stdio.h>
#include <stdlib.h>

int main()
{
// ENTRADA
    float preco, reajuste, total;
    int quantidade, opcao;

    printf("Menu: Opcoes de reajuste: \n");
    printf("1: Para Acrescimo\n");
    printf("2: Para Desconto\n");
    printf("Sua Opcao: \n");
    scanf("%i", &opcao);


// TRATAMENTO DE ERRO
    if (opcao < 1 || opcao > 2)
        printf("ERRO NA OPCAO: Valor de ser 1 ou 2\n");
    else {
        printf("Dados da mercadoria; \n");
        printf("Preco: R$ "); scanf("%f", &preco);
        printf("Quantidade (Unidades): "); scanf("%i", &quantidade);
        printf("Reajuste (%%): "); scanf("%f", &reajuste);

// TRATAMENTO DE ERRO
    if (preco <= 0)
        printf("Erro no preco: Preco > 0\n");
    else if (quantidade <= 0)
        printf("Erro na quantidade: Valor maior que zero\n");
    else if (reajuste <= 0)
        printf("Erro no reajuste: Valor > 0\n");
    else {
        total = preco * quantidade;
        printf("Total (sem reajuste): R$ %.2f\n", total);
        if(opcao == 1){
            total = total * (1 + reajuste / 100);
            printf("Preco (Reajuste: %.2f %%): R$ %.2f\n", reajuste, total);
        }

        else {
            total = total * (1 - reajuste / 100);
            printf("Preco (Desconto: %.2f %%): R$ %.2f\n", reajuste, total);
        }
    }

    }

    return 0;
}
