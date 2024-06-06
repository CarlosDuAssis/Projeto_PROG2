#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "funcoes.h"

int main(){

    FILE* fp;
    fp = fopen("arquivos/dadosMedalhas.dat", "r+b");

    int contadorLinhas = 0;

    // neste caso, caso o arquivo de dados das medalhas seja nulo, signfica que é a primeira vez que o programa está sendo aberto
    if (fp = NULL)
    {
        fclose(fp);
        Medalha* medalhas;
        
        fp = fopen("arquivos/medalhas.csv", "r");
        if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo.\n");
            exit(1);
        }
        
        contadorLinhas = contaLinhas(fp);

        medalhas = (Medalha*) malloc(contadorLinhas * sizeof(Medalha));
    }
    





    return 0;
}