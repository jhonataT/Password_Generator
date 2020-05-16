#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
    void gerar_senhas(){
        system("clear");
        printf("\n\n\n-----------Bem vindo ao seu gerador de senhas---------------------\n\n");
        printf("------------------------------------------------------------------\n");
        printf("\n     Agora você só precisa digitar um número de palavras/números, separadas ou não por espaço\n\n");
        printf("       Depois de digitar, pressione a tecla `ENTER`\n\n");
        printf("------------------------------------------------------------------\n");
        getchar();
        char str[999], senha_atual[8];
        fgets(str, 999, stdin);
        int x = strlen(str);
        // char BaseS[x];
        // for(int i = 0; i <= x; i++){
        //     if(str[i] != ' '){
        //         BaseS[i] = str
        //     }
        // }
        int senhas = 0;

        while(senhas < 10){
            int tamanho_senha = 0;
           while(tamanho_senha < 8){
               int i = (rand() % x);
               if(str[i] != ' '){
                   i += 1;
               }
               if(str[i] != '\n'){
                    senha_atual[tamanho_senha] = str[i];
                    ++tamanho_senha;

               }
            //    else senha_atual[tamanho_senha] = '}';
           }    
            printf("Senha %d: %s\n", senhas + 1, senha_atual);
            ++senhas;
        }
    }

    void manual(){
        system("clear");
        printf("\n\n\n-----------Bem vindo ao seu gerador de senhas---------------------\n\n");
        printf("------------------------------------------------------------------\n");
        printf("\n      Este programa pretende gerar 10 senhas diferentes, mas como essas senhas serão geradas?\n");
        printf("\n      VOCÊ SÓ PRECISA INFORMAR, NO MÍNIMO, UMA PALAVRA E/OU UMA SÉRIE DE NÚMEROS (SEPARADOS OU NÃO POR ESPAÇO).\n\n\n");
        printf("------------------------------------------------------------------\n\n");

        printf("\n      Entendeu??\n\n\n");
        int s_ou_n;
        printf("            Sim? Digite 1\n");
        printf("            Não? Digite 2\n");
        scanf("%d", &s_ou_n);
        if(s_ou_n == 1) gerar_senhas();
        else{
            system("clear");
            printf("------------------------------------------------------------------\n");
            printf("\n  Sério???\n\n Mas enfim, você gostaria de olhar o tutorial novamente?\n");
            printf("\n      1. Tutorial.\n");
            printf("\n      2. Gerar as senhas.\n");
            printf("\n------------------------------------------------------------------\n");
            scanf("%d", &s_ou_n);
            if(s_ou_n == 1) manual();
            else gerar_senhas();
        }
    }
    
    int main(){
        system("clear");
        printf("\n\n\n-----------Bem vindo ao seu gerador de senhas---------------------\n");
        printf("\nDigite 1 ou 2 para os seguintes comandos:\n    1. Como funciona?\n    2. Gerar senhas.\n\n\n");
        int comando_inicial;
        scanf("%d", &comando_inicial);
        if(comando_inicial == 1) manual();
        else gerar_senhas();
        // system("clear");
    }