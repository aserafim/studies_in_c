#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada;


    printf("Insira um número inteiro: ");
    scanf("%d", &entrada);

    printf("O valor inserido foi: %d", entrada);


    printf("\nPressione qualquer tecla para finalizar.\n");
    getchar();

    return 0;
}