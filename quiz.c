#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define NUM_PERGUNTAS 15  // Número total de perguntas

int main() {
    int perguntas_feitas[NUM_PERGUNTAS] = {0}; // Array para controlar perguntas feitas
    char opcao;
    int resposta;
    int acertos = 0;

    srand(time(NULL));
    while (acertos < NUM_PERGUNTAS) {
        int numero = rand() % NUM_PERGUNTAS + 1;



        // Verifica se a pergunta já foi feita
        if (perguntas_feitas[numero - 1] == 1) {
            continue; // Pula para a próxima iteração do loop se a pergunta já foi feita
        }

        // Marca a pergunta como feita
        perguntas_feitas[numero - 1] = 1;

    printf("\nBem vindo ao quiz das olimpíadas!\n");
    
        switch (numero) {
            case 1:
                printf("Em qual cidade ocorreu a primeira edição das olimpíadas (1896)?\n"
                       "A- Londres (Inglaterra)\n"
                       "B- Paris (França)\n"
                       "C- Atenas (Grécia)\n"
                       "D- Viena (Áustria)\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); // Converte para maiúscula
                resposta = 'C';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: Atenas (Grécia) \n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; // Encerra o programa se errar
                }
                break;

            case 2:
                printf("Qual a única prova do atletismo realizada em equipe?\n"
                       "A- Revezamento\n"
                       "B- Salto triplo\n"
                       "C- Maratona\n"
                       "D- Salto com vara\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'A';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: Revezamento\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 3:
                printf("Cada cor de cada arco olímpico representa um dos continentes.\n"
                       "Qual arco representa a Ásia e a América respectivamente?\n"
                       "A- Verde e Azul\n"
                       "B- Preto e Vermelho\n"
                       "C- Amarelo e Vermelho\n"
                       "D- Amarelo e Azul\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'C';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: Amarelo e Vermelho\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 4:
                printf("Quantas raias tem uma pista de atletismo?\n"
                       "A- 7\n"
                       "B- 8\n"
                       "C- 9\n"
                       "D- 10\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'B';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 8\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 5:
                printf("Qual modalidade da corrida não tem curva em sua trajetória?\n"
                       "A- 200m\n"
                       "B- 50m\n"
                       "C- 100m\n"
                       "D- 150m\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'C';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 100m\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 6:
                printf("Qual a primeira edição que as mulheres puderam participar?\n"
                       "A- Paris 1900\n"
                       "B- Saint Louis 1904\n"
                       "C- Londres 1908\n"
                       "D- Estocolmo 1912\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'A';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: Paris 1900\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 7:
                printf("No tiro com arco, quanto o atleta ganha em pontos ao acertar o centro do alvo?\n"
                       "A- 6 pontos\n"
                       "B- 8 pontos\n"
                       "C- 10 pontos\n"
                       "D- 12 pontos\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'C';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 10 pontos\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 8:
                printf("Quantos metros um nadador percorre ao competir na categoria Medley em uma prova de natação?\n"
                       "A- 100 metros\n"
                       "B- 200 metros\n"
                       "C- 300 metros\n"
                       "D- 400 metros\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'D';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 400 metros\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 9:
                printf("Quantas modalidades de atletismo existem?\n"
                       "A- 12\n"
                       "B- 24\n"
                       "C- 32\n"
                       "D- 45\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'B';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 24\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 10:
                printf("Onde ocorre a prova de Maratona Aquática?\n"
                       "A- Piscina olímpica\n"
                       "B- Mar aberto\n"
                       "C- Rio\n"
                       "D- Lago\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'B';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: Mar aberto\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 11:
                printf("Qual o recorde conquistado por Usain Bolt nos 100 metros rasos? (Olimpíada)\n"
                       "A- 8,14 seg\n"
                       "B- 11,28 seg\n"
                       "C- 9,69 seg\n"
                       "D- 10,32 seg\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'C';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 9,69 seg\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 12:
                printf("Qual o recorde do salto com vara masculino? (Olimpíada)\n"
                       "A- 9,12 metros\n"
                       "B- 8,18 metros\n"
                       "C- 7,51 metros\n"
                       "D- 6,03 metros\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'D';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 6,03 metros\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 13:
                printf("Qual o recorde do salto à distância feminino? (Olimpíada)\n"
                       "A- 5,60 metros\n"
                       "B- 6,40 metros\n"
                       "C- 7,40 metros\n"
                       "D- 7,90 metros\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'C';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 7,40 metros\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 14:
                printf("De quantos quilômetros (aproximadamente) é composta a maratona?\n"
                       "A- 28 km\n"
                       "B- 30 km\n"
                       "C- 38 km\n"
                       "D- 42 km\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'D';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 42 km\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            case 15:
                printf("Quantas bases tem o campo de beisebol?\n"
                       "A- 2\n"
                       "B- 4\n"
                       "C- 7\n"
                       "D- 9\n");
                scanf(" %c", &opcao);
                opcao = toupper(opcao); 
                resposta = 'B';
                if (opcao == resposta) {
                    printf(" Correto! :D\n\n");
                    acertos++;
                } else {
                    printf(" Não foi dessa vez :( \n A resposta correta era: 4\n");
                    printf("Número de acertos: %d\n", acertos);
                    return 0; 
                }
                break;

            default:
                break;
        }
    }

    printf("\nParabéns! Você acertou todas as perguntas!\n");

    return 0;
}
