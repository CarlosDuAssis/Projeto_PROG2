#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "funcoes.h"
#include "quiz.h"

int main(){

    FILE* fp;
    fp = fopen("arquivos/dadosMedalhas.dat", "r");

    int contadorLinhas = 0;
    Medalha* medalhas;

    // neste caso, caso o arquivo de dados das medalhas seja nulo, signfica que é a primeira vez que o programa está sendo aberto
    if (fp == NULL)
    {
        
        printf("Bem vindo ao programa de Medalhas Olímpicas!\n");

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

        printf("Dados carregados com sucesso!\n");

    }else{
        fclose(fp); // caso o arq exista, o programa já foi executado antes.
    } // if



    // inicia o programa exibindo o menu
    int opcao = 0;
    int opcaoSecundaria = 0;

    printf("Menu: \n");
    printf("1 - Gerenciamento de Medalhas\n"
            "2 - Quiz\n"
            "3 - Exportar dados\n"
            "4 - Sair do Programa\n");

    
    // pede uma opção válida
    do
    {
        printf("Deseje a opção desejada: ");
        scanf("%d", &opcao);
        if (opcao <= 0 || opcao > 4)
        {
            printf("Opção inválida!\n");
        } // if
    } while (opcao <= 0 || opcao > 4);


    // de acordo com a opção desejada, fornece uma função ou um submenu
    switch (opcao)
    {
    case 1:
        printf("Você escolheu Gerenciamento de Medalhas!\n");
        printf("1 - Inserir Medalhas\n"
            "2 - Alterar Medalhas\n"
            "3 - Excluir Medalhas\n"
            "4 - Pesquisar Medalhas\n"
            "5 - Listar Medalhas\n");
         do
        {
            printf("Deseje a opção desejada: ");
            scanf("%d", &opcaoSecundaria);
            if (opcaoSecundaria <= 0 || opcaoSecundaria > 5)
            {
                printf("Opção inválida!\n");
            } // if
        } while (opcao <= 0 || opcao > 5);

        if (opcaoSecundaria == 1)
        {

            // realiza o cadastro de medalhas
            printf("Você Escolheu Inserir Medalhas!");
            inserirMedalhas(medalhas, &contadorLinhas);
            printf("Medalhas cadastradas com sucesso! Voltando ao menu.\n\n");

            // exibe o menu novamente
            printf("Menu: \n");
            printf("1 - Gerenciamento de Medalhas\n"
                    "2 - Quiz\n"
                    "3 - Exportar dados\n"
                    "4 - Sair do Programa\n");

            
            // pede uma opção válida
            do
            {
                printf("Deseje a opção desejada: ");
                scanf("%d", &opcao);
                if (opcao <= 0 || opcao > 4)
                {
                    printf("Opção inválida!\n");
                } // if
            } while (opcao <= 0 || opcao > 4);

        }else if (opcaoSecundaria == 2)
        {
            printf("Você escolheu a função Alterar Medalhas!\n");
        }else if (opcaoSecundaria == 3)
        {
            printf("Você escolheu a função Excluir Medalhas!\n");
        }else if (opcaoSecundaria == 4)
        {
            printf("Você escolheu a função Pesquisar Medalhas!\n");
        }else if (opcaoSecundaria == 5)
        {
            
            // exibe a lista de medalhas
            printf("Você escolheu a função Listar Medalhas!\n\n");
            listarMedalhas(medalhas, &contadorLinhas);
            printf("\n\n Todas as medalhas estão listadas acima. Voltando ao menu.\n\n");

            // exibe o menu novamente
            printf("Menu: \n");
            printf("1 - Gerenciamento de Medalhas\n"
                    "2 - Quiz\n"
                    "3 - Exportar dados\n"
                    "4 - Sair do Programa\n");

            
            // pede uma opção válida
            do
            {
                printf("Deseje a opção desejada: ");
                scanf("%d", &opcao);
                if (opcao <= 0 || opcao > 4)
                {
                    printf("Opção inválida!\n");
                } // if
            } while (opcao <= 0 || opcao > 4);
        } // ultimo if

        break; // case 1

    case 2:
        printf("Você escolheu a opção quiz!\n\n");
        quiz();
        printf("\n\nRetornando ao menu...\n\n");


        // exibe o menu novamente
        printf("Menu: \n");
        printf("1 - Gerenciamento de Medalhas\n"
                "2 - Quiz\n"
                "3 - Exportar dados\n"
                "4 - Sair do Programa\n");

        
        // pede uma opção válida
        do
        {
            printf("Deseje a opção desejada: ");
            scanf("%d", &opcao);
            if (opcao <= 0 || opcao > 4)
            {
                printf("Opção inválida!\n");
            } // if
        } while (opcao <= 0 || opcao > 4);

        break; // case 2

    case 3:
        break;
    case 4:

        printf("Saindo do programa.\n");

        // abre o arq dadosMedalhas e salva os dados o vetor medalhas em binário, depois fecha o arq
        fp = fopen("arquivos/dadosMedalhas.dat", "wb");
        if (fp == NULL)
        {
            perror("Erro ao abrir o arquivo dadosMedalhas.dat.\n");
            exit(1);
        }
        fwrite(medalhas, sizeof(Medalha), contadorLinhas, fp);
        fclose(fp);

        break; // case 4
    default:
        break;
    } // switch 

    free(medalhas);

    return 0;
}