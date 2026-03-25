#include <stdio.h>
#include <stdlib.h>

// Escrever um algoritmo em C para exibir os múltiplos de ƞ compreendidos entre o intervalo:
//[LimiteInferior LimiteSuperior] ε N. Sendo que:
//✓ {ƞ ∈ N/ ƞ ≥ 2}
//✓ {LimiteInferior , LimiteSuperior ∈ N/ LimiteSuperior ≥ LimiteInferior} 

int main()
{
    int n, min, max;
    int contador = 0;

    printf("Exibir MÚLTIPLOS de n dentro de um intervalo\n");
    printf("Insira o valor de n: \n");
    scanf("%i", &n);
    printf("Inicio do intervalo: \n");
    scanf("%i", &min);
    printf("Fim do intervalo: \n");
    scanf("%i", &max);
    
        if(n < 2)
        printf("Erro. Insira um valor igual ou maior que 2.\n");
        else if (max < min)
        printf("Erro. Insira um valor de fim de intervalo maior que o de inico.\n");
        else {
            for(contador = min; contador <= max; ++contador){
                if (contador % n == 0)
                printf("%i\n", contador);
            }
    }
 
    return 0;
}
