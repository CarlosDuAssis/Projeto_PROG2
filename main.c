#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "funcoes.h"

int main(){

    FILE* fp;
    fp = fopen("arquivos/dadosMedalhas.dat", "wb");

    int contadorLinhas = 0;

    // neste caso, caso o arquivo de dados das medalhas seja nulo, signfica que é a primeira vez que o programa está sendo aberto
    if (fp == NULL)
    {

        Medalha* medalhas;
        
        fp = fopen("arquivos/medalhas.csv", "r");
        if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo.\n");
            exit(1);
        }
        
        contadorLinhas = contaLinhas(fp);

        medalhas = (Medalha*) malloc(contadorLinhas * sizeof(Medalha));
        if (medalhas == NULL)
        {
            perror("Erro ao alocar memória.\n");
            exit(1);
        }
        

        for (int i = 0; i < contadorLinhas; i++) {
            if (fscanf(fp, "%c,%20[^,],%20[^,],%d,%c,%30[^,],%20[^,],%16[^\n]",
                &medalhas[i].genero,
                medalhas[i].modalidade,
                medalhas[i].cidade,
                &medalhas[i].ano,
                &medalhas[i].tipoMedalha,
                medalhas[i].nomeAtleta,
                medalhas[i].paisOrigem,
                medalhas[i].resultado) != 8) {
                perror("Erro ao ler linha do arquivo CSV.\n");
                free(medalhas);
                fclose(fp);
                exit(1);
            }
            fgetc(fp);
        }
        fclose(fp);

        fp = fopen("arquivos/dadosMedalhas.dat", "wb");
        if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo.\n");
            exit(1);
        }

        fwrite(medalhas, sizeof(Medalha), contadorLinhas, fp);
        fclose(fp);
        free(medalhas);

    }else{
        fclose(fp); // programa ja foi executado antes
    }


    return 0;
}