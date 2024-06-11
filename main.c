#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "funcoes.h"

int main(){

    FILE* fp;
    fp = fopen("arquivos/dadosMedalhas.dat", "r");

    int contadorLinhas = 0;

    // neste caso, caso o arquivo de dados das medalhas seja nulo, signfica que é a primeira vez que o programa está sendo aberto
    if (fp == NULL)
    {

        Medalha* medalhas;
        
        fp = fopen("arquivos/medalhas.csv", "r");
        if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo medalhas.csv.\n");
            exit(1);
        }
        
        contadorLinhas = contaLinhas(fp);

        medalhas = (Medalha*) malloc(contadorLinhas * sizeof(Medalha));
        if (medalhas == NULL)
        {
            perror("Erro ao alocar memória.\n");
            exit(1);
        }
        

       medalhas = separaDados(fp, contadorLinhas, medalhas);


    // EXEMPLO DE COMO FICOU OS DADOS ---------------------------------------------------------------
         if (medalhas != NULL) {
        // Exemplo de como usar os dados lidos
        for (int i = 0; i < contadorLinhas; i++) {
            printf("Medalha %d: %c, %s, %s, %d, %c, %s, %s, %s\n", 
                i + 1, medalhas[i].genero, medalhas[i].modalidade, 
                medalhas[i].cidade, medalhas[i].ano, medalhas[i].tipoMedalha, 
                medalhas[i].nomeAtleta, medalhas[i].paisOrigem, medalhas[i].resultado);
        }

        // Liberar memória alocada
        free(medalhas);
    } else {
        printf("Falha ao processar o arquivo CSV.\n");
    }
    // FIM DO EXEMPLO --------------------------------------------------------------------------------


        fp = fopen("arquivos/dadosMedalhas.dat", "wb");
        if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo dadosMedalhas.dat.\n");
            exit(1);
        }

        fwrite(medalhas, sizeof(Medalha), contadorLinhas, fp);
        fclose(fp);

    }else{
        fclose(fp);
    }

    return 0;
}