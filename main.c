//Maikon Liniker Araújo de Souza
//Álgebra e Lógica linear
#include <stdio.h>

void mostra_binario(char binario);
char msg[] = "PATO";
char chave[] = "LINO";

int main()
{

    printf("Mensagem: %s\n", msg);
    printf("Palavra Chave: %s\n", chave);

    // Calcula o tamanho da mensagem
    int tamanho = sizeof(msg) / sizeof(char);

    int tamanho_chave = sizeof(chave) / sizeof(char);

    for (int i = 0; i < tamanho -1; i++)
    {
        char binario = msg[i];
        char crypto = binario ^ chave[i % tamanho_chave];
        mostra_binario(crypto);
    }
    return 0;
}

void mostra_binario(char binario)
{

    unsigned char base = 0b10000000;

    printf("Valor em Binario:0b");

    for (int i = 0; i < 8; i++)
    {
        unsigned teste = binario & base;
        if (teste > 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        base = base >> 1;
    }
    printf("\n");
}







