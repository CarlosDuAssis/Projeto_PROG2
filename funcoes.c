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

Medalha* separaDados(FILE* fp, int* contadorLinhas, Medalha* medalhas){

    int contador = 0;

    fp = fopen("arquivos/medalhas.csv", "r");
    if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo medalhas.csv.\n");
            exit(1);
        }

    for (int i = 0; i < (*contadorLinhas); i++) {
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

void listarMedalhas(Medalha* medalhas, int* contadorLinhas){

    if (medalhas != NULL) {
        // Exemplo de como usar os dados lidos
        for (int i = 0; i < (*contadorLinhas); i++) {
            printf("Medalha %d: %c, %s, %s, %d, %c, %s, %s, %s\n", 
                i + 1, medalhas[i].genero, medalhas[i].modalidade, 
                medalhas[i].cidade, medalhas[i].ano, medalhas[i].tipoMedalha, 
                medalhas[i].nomeAtleta, medalhas[i].paisOrigem, medalhas[i].resultado);
        }

    } else {
        printf("Falha ao processar o arquivo CSV.\n");
    }

    return;
}

// arquivo com todas as funções base do programa 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
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

Medalha* separaDados(FILE* fp, int* contadorLinhas, Medalha* medalhas){

    int contador = 0;

    fp = fopen("arquivos/medalhas.csv", "r");
    if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo medalhas.csv.\n");
            exit(1);
        }

    for (int i = 0; i < (*contadorLinhas); i++) {
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

void listarMedalhas(Medalha* medalhas, int* contadorLinhas){

    if (medalhas != NULL) {
        // Exemplo de como usar os dados lidos
        for (int i = 0; i < (*contadorLinhas); i++) {
            printf("Medalha %d: %c, %s, %s, %d, %c, %s, %s, %s\n", 
                i + 1, medalhas[i].genero, medalhas[i].modalidade, 
                medalhas[i].cidade, medalhas[i].ano, medalhas[i].tipoMedalha, 
                medalhas[i].nomeAtleta, medalhas[i].paisOrigem, medalhas[i].resultado);
        }

    } else {
        printf("Falha ao processar o arquivo CSV.\n");
    }

    return;
}

void pesquisaMedalha(){

     //variavel auxiliar para armazenar dados sobre a pesquisa
    char genero,medalha; 
    int modalidade,paisSede;

    do{
        printf("\nDigite o genero da medalha:\nMasculino \"M\" ou Feminino \"F\": ");
        scanf("%c",&genero);
        genero = toupper(genero);

        if(genero == 'M'){

        }else if(genero == 'F'){

        }else{
            printf("Opcao invalida, tente novamente.\n");
        }
        setbuf(stdin,NULL);
    }while(genero != 'M' && genero != 'F');

    do{
        printf("\nEscolha a modalidade:\n"
        "1- 10000 metros\n"
        "2- 100 metros rasos\n"
        "3- 110 metros rasos\n"
        "4- 110 metros com obstaculos\n"
        "5- 150 metros rasos\n"
        "6- 200 metros\n"
        "7- 20km\n"
        "8- 300 metros obstaculos\n"
        "9- 400 metros obstaculos\n"
        "10- 4x100m revezamento\n"
        "11- 4x400m revezamento\n"
        "12- 5000 metros\n"
        "13- 50km\n"
        "14- 800 metros rasos\n"
        "15- declato(Masculino)/heptatlo(feminino)\n"
        "16- lancamento de disco\n"
        "17- lancamento de martelo\n"
        "18- salto em altura\n"
        "19- lancamento de dardo\n"
        "20- salto em distancia\n"
        "21- maratona\n"
        "22- salto com vara\n"
        "23- aremesso de peso\n"
        "24- pulo triplo\n"
        );
        scanf("%d",&modalidade);
    }while(modalidade<1 || modalidade >24);

    do{
        printf("\nEscolha a edicao:\n"
        "1- 1896 Atenas\n"
        "2- 1900 Paris\n"
        "3- 1904 Saint Louis\n"
        "4- 1908 Londres\n"
        "5- 1912 Estocolmo\n"
        "6- 1920 Antuerpia\n"
        "7- 1924 Paris"
        "8- 1928 Amsterda\n"
        "9- 1932 Los Angeles\n"
        "10- 1936 Berlim\n"
        "11- 1948 Londres\n"
        "12- 1952 Helsinque\n"
        "13- 1956 Melbourne\n"
        "14- 1960 Roma\n"
        "15- 1964 Toquio\n"
        "16- 1968 Cidade do Mexico\n"
        "17- 1972 Munique\n"
        "18- 1976 Montreal\n"
        "19- 1980 Moscou\n"
        "20- 1984 Los Angeles\n"
        "21- 1988 Seul\n"
        "22- 1992 Barcelona\n"
        "23- 1996 Atlanta\n"
        "24- 2000 Sydney\n"
        "25- 2004 Atenas\n"
        "26- 2008 Pequim\n"
        "27- 2012 Londres\n"
        "28- 2016 Rio de Janeiro\n"
        "29- 2020 Toquio\n");
        scanf("%d",&paisSede);
    }while(paisSede<1 || paisSede >29);

    do{
        printf("\nDigite o tipo da medalha \nOURO \"G\",Prata \"S\" ou Bronze: \"B\": ");
        setbuf(stdin,NULL);
        scanf("%c",&medalha);
        medalha = toupper(medalha);

        if(medalha == 'G'){

        }else if(medalha == 'S'){

        }else if(medalha == 'B'){

        }else{
            printf("Opcao invalida, tente novamente.\n");
        }
        setbuf(stdin,NULL);
    }while(medalha != 'G' && medalha != 'S' && medalha != 'B');


    return;
}//pesquisaMedalha