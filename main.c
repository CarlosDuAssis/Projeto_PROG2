#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "funcoes.h"

int main(){

    FILE* fp;
    fp = fopen("arquivos/dadosMedalhas.dat", "r");

    int contadorLinhas = 0;
    Medalha* medalhas;

    // neste caso, caso o arquivo de dados das medalhas seja nulo, signfica que é a primeira vez que o programa está sendo aberto
    if (fp == NULL)
    {

        // abre o .csv
        fp = fopen("arquivos/medalhas.csv", "r");
        if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo medalhas.csv.\n");
            exit(1);
        }
        
        // função pra contar as linhas do arquivo (tamanho)
        contadorLinhas = contaLinhas(fp);

        //aloca dinamicamente o vetor medalhas inicial
        medalhas = (Medalha*) malloc(contadorLinhas * sizeof(Medalha));
        if (medalhas == NULL)
        {
            perror("Erro ao alocar memória.\n");
            exit(1);
        }
        
        // faz o parse do .csv e salva no vetor medalhas
       medalhas = separaDados(fp, &contadorLinhas, medalhas);

        // abre o arq dadosMedalhas e salva os dados o vetor medalhas em binário, depois fecha o arq
        fp = fopen("arquivos/dadosMedalhas.dat", "wb");
        if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo dadosMedalhas.dat.\n");
            exit(1);
        }
        fwrite(medalhas, sizeof(Medalha), contadorLinhas, fp);
        fclose(fp);


    }else{
        fclose(fp); // caso o aarq exista, o programa já foi executado antes.
    }

    // inicia o programa exibindo o menu
    exibirMenu();

    free(medalhas);

    return 0;
}