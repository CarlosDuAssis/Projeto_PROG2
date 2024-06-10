#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
void leString(nome[],tamanho){
    fgets(nome,tamanho, stdin);
    nome[strcspn(nome,"\n")] = '\0';
    setbuf(stdin,NULL);
}//leString
*/

int main(){

    int numero=1;
    int opcao;
    int resposta;

    /*
    //permite que seja possivel variar o valor da variável toda vez que o programa rodar
    srand(time(NULL)); 

    //randomiza a variável número entre 1 a 20
    numero = rand() % 20; 

     case :
            printf("\n"
            "1- \n"
            "2- \n"
            "3- \n"
            "4- \n");
            scanf("%d",&opcao);
            resposta = 1;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: \n");
                i=20;
            break;
            }
    
    */

    printf("\nBem vindo ao quiz das olimpiadas!\n");

    for(int i=0;i<20; i++){
        switch (numero){
        case 1:
            printf("Em qual cidade ocorreu a primeira ediçâo das olimpiadas(1896)?\n"
            "1- Londres (Inglaterra) \n"
            "2- Paris (França)\n"
            "3- Atenas (Grecia)\n"
            "4- Viena (Austria)\n");
            scanf("%d",&opcao);
            resposta = 3;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: Atenas (Grecia) \n");
                i=20;
            break;
            }

        case 2:
            printf("Qual a única prova do atletismo realizada em equipe?\n"
            "1- Revezamento\n"
            "2- Salto triplo\n"
            "3- Maratona\n"
            "4- Salto com vara\n");
            scanf("%d",&opcao);
            resposta = 1;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: Revezamento\n");
                i=20;
            break;
            }

        case 3:
            printf("Cada cor de cada arco olímpico representa um dos continentes.\n"
            "Qual arco representa a Ásia e a América respectivamente?\n"
            "1- Verde e Azul \n"
            "2- Preto e vermelho\n"
            "3- Amarelo e Vermelho\n"
            "4- Amarelo e Azul\n");
            scanf("%d",&opcao);
            resposta = 3;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: Amarelo e Vermelho\n");
                i=20;
            break;
            }

        case 4:
            printf("Quantas rais tem uma pista de atletismo?\n"
            "1- 7\n"
            "2- 8\n"
            "3- 9\n"
            "4- 10\n");
            scanf("%d",&opcao);
            resposta = 2;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 8\n");
                i=20;
            break;
            }
        
        case 5:
            printf("Qual modalidade da corrida não tem curva em sua trajetória\n"
            "1- 200m\n"
            "2- 50m\n"
            "3- 100m\n"
            "4- 150m\n");
            scanf("%d",&opcao);
            resposta = 3;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 100m\n");
                i=20;
            break;
            }

        case 6:
            printf("Qual a primeira edição que as mulheres puderam participar?\n"
            "1- Paris 1900\n"
            "2- Saint Louis 1904\n"
            "3- Londres 1908\n"
            "4- Estocolmo 1912\n");
            scanf("%d",&opcao);
            resposta = 1;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: Paris 1900\n");
                i=20;
            break;
            }

        case 7:
            printf("No tiro com arco, quanto o atleta ganha em pontos ao acertar o centro do alvo?\n"
            "1- 6 pontos\n"
            "2- 8 pontos\n"
            "3- 10 pontos\n"
            "4- 12 pontos\n");
            scanf("%d",&opcao);
            resposta = 3;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 10 pontos\n");
                i=20;
            break;
            }
        
        case 8:
            printf("Quantos metros um nadador percorre ao competir na categoria Medley em uma prova de natação?\n"
            "1- 100 metros\n"
            "2- 200 metros\n"
            "3- 300 metros\n"
            "4- 400 metros\n");
            scanf("%d",&opcao);
            resposta = 4;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 400 metros\n");
                i=20;
            break;
            }

        case 9:
            printf("Quantas modalidades de atletismo existem?\n"
            "1- 12\n"
            "2- 24\n"
            "3- 32\n"
            "4- 45\n");
            scanf("%d",&opcao);
            resposta = 2;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 24\n");
                i=20;
            break;
            }

        case 10:
            printf("Onde ocorre a prova de Maratona Aquática?\n"
            "1- Piscina olimpica\n"
            "2- Mar aberto\n"
            "3- Rio\n"
            "4- Lago\n");
            scanf("%d",&opcao);
            resposta = 2;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: Mar aberto\n");
                i=20;
            break;
            }

        case 11:
            printf("Qual o recorde conquistado por Usain Bolt nos 100 metros rasos? (Olimpíada)\n"
            "1- 8,14 seg\n"
            "2- 11,28 seg\n"
            "3- 9,69 seg\n"
            "4- 10,32 seg\n");
            scanf("%d",&opcao);
            resposta = 3;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 9,69 seg\n");
                i=20;
            break;
            }

            case 12:
            printf("Qual o recorde do salto com vara masculino? (Olimpíada)\n"
            "1- 9,12 metros\n"
            "2- 8,18 metros\n"
            "3- 7,51 metros\n"
            "4- 6,03 metros\n");
            scanf("%d",&opcao);
            resposta = 4;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 6,03 metros\n");
                i=20;
            break;
            }

        case 13:
            printf("Qual o recorde do salto à distãncia feminino? (Olimpíada)\n"
            "1- 5,60 metros\n"
            "2- 6,40 metros\n"
            "3- 7,40 metros\n"
            "4- 7,90 metros\n");
            scanf("%d",&opcao);
            resposta = 3;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 7,40 metros\n");
                i=20;
            break;
            }

        case 14:
            printf("De quantos quilometros (aproxidamente) é composta a maratona?\n"
            "1- 28 km\n"
            "2- 30 km\n"
            "3- 38 km\n"
            "4- 42 km\n");
            scanf("%d",&opcao);
            resposta = 4;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 42km\n");
                i=20;
            break;
            }

        case 15:
            printf("Quantas bases tem o campo de beisebol\n"
            "1- 2\n"
            "2- 4\n"
            "3- 7\n"
            "4- 9\n");
            scanf("%d",&opcao);
            resposta = 2;
            if(opcao == resposta){
                printf(" Correto! :D\n\n");
                i++;
            }else{
                printf(" não foi dessa vez :( \n A respota correta era: 4\n");
                i=20;
            break;
            }
        
        default:
            break;
        }
    }

    return 0;
}//main