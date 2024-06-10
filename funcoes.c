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
        }//if
    }//while

    rewind(fp);
    
    return contador;
}//contaLinhas

Medalha* separaDados(FILE* fp, int contadorLinhas, Medalha* medalhas){

    int contador = 0;

    fp = fopen("arquivos/medalhas.csv", "r");
    if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo medalhas.csv.\n");
            exit(1);
        }

    for (int i = 0; i < contadorLinhas; i++) {
        if (fscanf(fp, "%c,%63[^,],%63[^,],%d,%c,%63[^,],%63[^,],%63[^\n]",
            &medalhas[i].genero,
            medalhas[i].modalidade,
            medalhas[i].cidade,
            &medalhas[i].ano,
            &medalhas[i].tipoMedalha,
            medalhas[i].nomeAtleta,
            medalhas[i].paisOrigem,
            medalhas[i].resultado) != 8) {
            fprintf(stderr, "Erro ao ler linha %d do arquivo CSV.\n", i + 1);
            free(medalhas);
            fclose(fp);
            return NULL;
        }
        fgetc(fp); // Ler o caractere de nova linha após o fim da leitura de cada linha
    }
    
    fclose(fp);

    return medalhas;
}