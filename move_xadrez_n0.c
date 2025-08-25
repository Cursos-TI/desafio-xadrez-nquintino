#include <stdio.h>

int main(void)
{
    unsigned short bispo_saltos = 5;
    unsigned short rainha_saltos = 8;
    unsigned short torre_saltos = 5;


    printf("Movimento do bispo\n");
    for (int i = 0; i < bispo_saltos; i++)
    {
        printf("Cima, Direita\n");
    }

    printf("Movimento da rainha\n");
    for(int i = 0; i < rainha_saltos; i++)
    {
        printf("Esquerda\n");
    }
    
    printf("Movimento da torre\n");
    for(int i = 0; i < torre_saltos; i++)
    {
        printf("Direita\n");
    }

    return 0;
}