/*
Este programa foi desenvolvido por Flavio Miranda de Farias
Para disciplina Estrutura de Dados e Algoritmos 2019-1
Professora Isabel Rosseti - UFF
Lista de exercícios 03
*/

#include <stdio.h>
#include <string.h>

char* codifica(char *str);
int* transf_i_pA(int *vet, int n);

void main(){
    menu();
}
int menu(){
    char op;
    while(1){
        system("cls");
        printf("Lista de exercicios 03 - 2019.1\n\n");
        printf("Digite o valor do menu a baixo\n\n");
        printf("1 - Exercicio 01\n");
        printf("2 - Exercicio 02\n");
        printf("3 - Exercicio 03\n");
        printf("4 - Exercicio 04\n");
        printf("5 - Exercicio 01\n");
        printf("6 - Exercicio 02\n");
        printf("7 - Exercicio 03\n");
        printf("8 - Exercicio 04\n");
        printf("9 - Exercicio 04\n");
        printf("Outro - Para sair\n\n---> ");
        scanf (" %c", &op);
        printf("\n\n");
        switch (op){
        case '1':
            printf("Implemente uma função em C que receba uma string como parâmetro e substitua todas as suas letras por predecessoras do alfabeto, trocando maiúsculas por minúsculas. Por exemplo, a string “Amor” seria alterada para “zLNQ”. Esta função deve obedecer o seguinte protótipo: void shift_troca_string (char *str). A letra ‘a’ deve ser substituída por ‘Z’ (e ‘A’ por ‘z’). Caracteres que não forem letras devem ser substituídos por ‘!’. Sabe-se que A = 65, Z = 90, a = 97 e z = 122.");
            printf("\n\n");
            Q01();
            system("pause");
            break;
        case '2':
            printf("Implemente uma função em C que receba uma string como parâmetro e retorne uma nova string com todos os caracteres minúsculos substituídos pelo caracter ‘?’. Por exemplo, se for passada a string “740-Charitas-Leme”, a função deve retornar a string “740-Ch?r?t?s-L?m?”. A assinatura desta função deve ser char * codifica (char *str). A string passada como parâmetro não pode ser alterada. O espaço de memória para a nova string deve ser alocado dinamicamente.");
            printf("\n\n");
            Q02();
            system("pause");
            break;
        case '3':
            printf("Considere que você receba um vetor de inteiros com números ímpares e pares e um número n, sendo n o tamanho do vetor. Implemente uma função que separe os valores inteiros de um vetor em ímpares e pares, obedecendo a ordem de entrada destes números no vetor. Implemente os dois protótipos abaixo:\na) int* transf_i_p (int *vet, int n)\nb) void transf_i_p (int *vet, int n)");
            printf("\n\n");
            Q03();
            system("pause");
            break;
        case '4':
            printf("Escreva uma função que receba, como entrada, uma cadeia de caracteres s e um inteiro n, e, em seguida, retire o \"prefixo\" da cadeia s de tamanho n (isto é, retire os n primeiros caracteres). Se a cadeia não tiver pelo menos n caracteres, deve ser impressa a mensagem \"erro\". Por exemplo, se s = \"abcdefghi\" e n = 3, então a cadeia \"defghi\" deve ser impressa; com a mesma cadeia s e n = 17, deve ser impresso \"erro\". O protótipo desta função é o seguinte: void retira_inicio_n (char *str, int n).");
            printf("\n\n");
            Q04();
            system("pause");
            break;
        case '5':
            printf("Escreva uma função que receba, como entrada, uma cadeia de caracteres s e um inteiro n, e, em seguida, retire o \"sufixo\" da cadeia s de tamanho n (isto é, retire os n últimos caracteres). Se a cadeia não tiver pelo menos n caracteres, deve ser impressa a mensagem \"erro\". Por exemplo, se s = \"abcdefghi\" e n = 3, então a cadeia \"abcdef\" deve ser impressa; com a mesma cadeia s e n = 17, deve ser impresso \"erro\". O protótipo desta função é o seguinte: void retira_fim_n (char *str, int n).");
            printf("\n\n");
            Q05();
            system("pause");
            break;
        case '6':
            printf("Escreva um programa que receba, como parâmetro de entrada, uma string, e verifique se esta string é uma “boa” senha. Entende-se por “boa” senha uma senha com as seguintes características de formação: (i) ela deve possuir, no mínimo, oito caracteres; (ii) ela deve ter, no mínimo, um caracter entre '0' a '9'; (iii) ela deve possuir, no mínimo, uma letra maiúscula; (iv) ela deve ter, no mínimo, uma letra minúscula; e (v) ela deve ter, pelo menos, um caracter do conjunto formato pelos demais caracteres do teclado.");
            printf("\n\n");
            Q06();
            system("pause");
            break;
        case '7':
            printf("Escreva um programa que receba duas strings, como parâmetros de entrada, e informe qual é a maior substring existente nas duas strings. Por exemplo, se as strings de entrada são ACCTGAACTCCCCCC e ACCTAGGACCCCCC, então a maior substring existente entre as duas strings será CCCCCC.");
            printf("\n\n");
            Q07();
            system("pause");
            break;
        case '8':
            printf("Escreva uma função que dadas duas strings, retorne UM se a primeira contém a segunda, ignorando maiúsculas e minúsculas, e ZERO, caso contrário. O protótipo da função é o seguinte: int cic (char *str1, char *str2).");
            printf("\n\n");
            Q08();
            system("pause");
            break;
        case '9':
            printf("Escreva uma função que dadas duas strings, retorne UM se as strings são iguais, ignorando maiúsculas e minúsculas, e ZERO, caso contrário. O protótipo da função é o seguinte: int igual (char *str1, char *str2).");
            printf("\n\n");
            Q09();
            system("pause");
            break;
        default:
            printf("Finalizando sistema... Tchau!\n");
            return 0;
            break;
        }
    }
}

int Q01(){
    char str[10];
    printf("\nDigite uma palavra a ser mudada\n---> ");
    scanf(" %s",&str);
    shift_troca_string(str);
    return 0;
}

void shift_troca_string (char *str){
    int i,tamanho = strlen(str);
    for(i=0;i<tamanho;i++)
        if(str[i]>=65 && str[i]<=90)//maiusculas
            if(str[i]!=65)
                str[i]=str[i]+33;
            else
                str[i]=str[i]+57;
        else
            if(str[i]>=97 && str[i]<=122)//minusculas
                if(str[i]!=97)
                    str[i]=str[i]-33;
                else
                    str[i]=str[i]-7;
            else
                str[i]='!';
    printf("\nNova String: %s\n",str);
}

int Q02(){
    char str[10];
    printf("\nDigite uma palavra a ser mudada\n---> ");
    scanf(" %s",&str);
    printf("\nAnterior: %s e Nova: %s\n",str,codifica(str));
    return 0;
}

char * codifica(char *str){
    int i,tamanho = strlen(str);
    char* string = (char *)malloc(sizeof(char)*tamanho);
    if(!string)
        exit(1);
    for(i=0;i<tamanho;i++)
        string[i]=str[i];
    for(i=0;i<tamanho;i++)
        if(string[i]>=97 && string[i]<=122)
                string[i]='?';
    return string;
}

int Q03(){
    int tamanho=10,i;
    int vetor[] = {0,1,2,3,4,5,6,7,8,9};
    printf("\nEsta e a saida da entrada Original: ");
    for(i=0;i<tamanho;i++)
        printf("%d ",vetor[i]);
    printf("\n");
    int *vet = (int*)malloc(sizeof(int)*tamanho);
    if(!vet)
        exit(1);
    vet=transf_i_pA(vetor,tamanho);
    printf("\nEsta e a saida da funcao A: ");
    for(i=0;i<tamanho;i++)
        printf("%d ",vet[i]);
    printf("\n");
    transf_i_pB(vetor,tamanho);
    printf("\n");
    return 0;
}

int* transf_i_pA(int *vet, int n){
    int i,contador=0;
    int *vetor = (int*)malloc(sizeof(int)*n);
    if(!vetor)
        exit(1);
    for(i=0;i<n;i++)
        if (vet[i]%2 == 0){
            vetor[contador]=vet[i];
            contador++;
        }
    for(i=0;i<n;i++)
        if (vet[i]%2 == 1){
            vetor[contador]=vet[i];
            contador++;
        }
    return vetor;
}

void transf_i_pB(int *vet, int n){
    int i,contador=0;
    int *vetor = (int*)malloc(sizeof(int)*n);
    if(!vetor)
        exit(1);
    for(i=0;i<n;i++)
        if (vet[i]%2 == 0){
            vetor[contador]=vet[i];
            contador++;
        }
    for(i=0;i<n;i++)
        if (vet[i]%2 == 1){
            vetor[contador]=vet[i];
            contador++;
        }
    printf("\nEsta e a saida da funcao B: ");
    for(i=0;i<n;i++)
        printf("%d ",vetor[i]);
}

int Q04(){
    int n=3;
    char s[]={'a','b','c','d','e','f','g','h','i'};
    retira_inicio_n(s,n);
    return 0;
}

void retira_inicio_n(char *str, int n){
    int i, tamanho=strlen(str);
    if(n>tamanho){
        printf("\nerro\n");
        exit(1);
    }
    char *vetor = (char*)malloc(sizeof(char)*tamanho-n);
    if(!vetor)
        exit(1);
    for(i=n;i<tamanho;i++)
        vetor[i-n]=str[i];
    printf("\nEsta e a saida: %s\n",vetor);
}

int Q05(){
    int n=3;
    char s[]={'a','b','c','d','e','f','g','h','i'};
    retira_fim_n(s,n);
    return 0;
}

void retira_fim_n(char *str, int n){
    int i, tamanho=strlen(str);
    if(n>tamanho){
        printf("\nerro\n");
        exit(1);
    }
    char *vetor = (char*)malloc(sizeof(char)*tamanho-n);
    if(!vetor)
        exit(1);
    for(i=0;i<tamanho-n;i++)
        vetor[i]=str[i];
    printf("\nEsta e a saida: %s\n",vetor);
}

int Q06(){

    return 0;
}

int Q07(){

    return 0;
}

int Q08(){

    return 0;
}

int Q09(){

    return 0;
}
