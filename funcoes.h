// arquivo de cabeçalhos pra funcoes

#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct 
{
    int codigo;
    char genero;
    char modalidade[64];
    char cidade[64];
    int ano;
    char tipoMedalha;
    char nomeAtleta[64];
    char paisOrigem[64];
    char resultado[64];
} Medalha;

int contaLinhas(FILE* fp);
Medalha* separaDados(FILE* fp, int *contadorLinhas, Medalha* medalhas);
void listarMedalhas(Medalha* medalhas, int* contadorLinhas);
void inserirMedalhas(Medalha* medalhas, int* contadorLinhas);

#endif /* FUNCOES_H */

