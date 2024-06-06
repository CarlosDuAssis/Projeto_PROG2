// arquivo de cabeçalhos

#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct 
{
    int codigo;
    char genero;
    char modalidade[21];
    char cidade[21];
    int ano;
    char tipoMedalha;
    char nomeAtleta[31];
    char paisOrigem[21];
    char resultado[16];
} Medalha;

void exibirMenu();
int contaLinhas(FILE* fp);

#endif /* FUNCOES_H */

