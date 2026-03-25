#include <stdio.h>
#include <stdlib.h>

//Escrever um algoritmo em C para exibir os múltiplos de 11 e a soma dos múltiplos de 11, em ordem decrescente (inversa), compreendidos entre o intervalo: [300 400].

int main()
{
    int contador = 400;
    int soma;

    printf("Múltiplos de 11 no intervalo [300, 400]:\n");
    
    for(contador = 400; contador >= 300; --contador){
        if(contador % 11 == 0)
        printf("%i\n", contador);
        --contador;
    }
 
    return 0;
}
