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
            resposta = ;
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
                printf(" não foi dessa vez :( \n A respota correta era: 3- Atenas (Grecia) \n");
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
                printf(" não foi dessa vez :( \n A respota correta era: 1- Revezamento\n");
                i=20;
            break;
            }

        case 3:
            printf("Cada cor de cada arco olímpico representa um dos continentes.\n"
            "Qual arco representa a Ásia e a América respectivamente?\n"
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

        case 4:
            printf("Quantas rais tem uma pista de atletismo?\n"
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
        
        case 5:
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

        case 6:
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

        case 7:
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
        
        case 8:
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

        case 9:
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

        case 10:
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

        case 11:
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

            case 12:
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

        case 13:
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

        case 14:
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

        case 15:
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

        case 16:
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

        case 17:
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

        case 18:
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

        case 19:
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

        case 20:
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
        
        default:
            break;
        }
    }

    return 0;
}//main