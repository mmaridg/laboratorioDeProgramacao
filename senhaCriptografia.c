#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    int quantidade = 0;

    printf("Sugestão de Senhas:");

    for(contador = 1000; contador <= 9999; ++contador){
        if(contador % 2 != 0 && contador % 39 == 0) {
            printf("SENHA %i: %i\n", quantidade + 1, contador);
            ++quantidade;
        }
    }
    return 0;
}
