// arquivo com todas as funções base do programa 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "funcoes.h"

void exibirMenu(){

    printf("Menu: \n");
    printf("1 - Gerenciamento de Medalhas\n"
            "2 - Quiz\n"
            "3 - Exportar dados\n"
            "4 - Sair do Programa\n");
    return;
}//exibirMenu

int contaLinhas(FILE* fp){

    int contador = 1; // todo arquivo possui ao menos 1 linha
    char c;

    // cada quebra de linha soma no contador
     while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            contador++;
        }
    }

    return contador;
}
