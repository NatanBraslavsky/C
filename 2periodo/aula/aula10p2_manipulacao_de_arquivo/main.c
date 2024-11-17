#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main(){

//     char nomeArquivo[50];
//     printf("Digite o nome do arquivo: ");
//     fgets(nomeArquivo, sizeof(nomeArquivo), stdin);

//     FILE *arquivo;
//     arquivo = fopen(nomeArquivo, "a");
//     if(arquivo == NULL){
//         printf("Erro ao abrir o arquivo.");
//         return 1;
//     }
//     int vetor[5], vetorArquivo[5];
//     for(int i = 0; i < 5; i++){
//         printf("Digite um numero: ");
//         scanf("%d", &vetor[i]);
//         fprintf(arquivo, "%d\n", vetor[i]);
//     }
//     fclose(arquivo);
//     arquivo = fopen(nomeArquivo, "r");
//     if(arquivo == NULL){
//         printf("Erro ao abrir o arquivo.");
//         return 1;
//     }
//     for(int i = 0; i < 5; i++){
//         fscanf(arquivo, "%d", &vetorArquivo[i]);
//         printf("%d\n", vetorArquivo[i]);
//     }
//     fclose(arquivo);
//     return 0;
// }



// 2. Escreva um programa que leia um arquivo de texto e conte o número de
// caracteres no arquivo, excluindo espaços em branco.

// int main(){
//     FILE *arquivo;
//     arquivo = fopen("arq.txt", "r");
//     if(arquivo == NULL){
//         printf("Erro ao abrir o arquivo.");
//         return 1;
//     }
//     int qtdCaracteresValidos = 0;
//     char ch;
//     while(ch != EOF){
//         ch = getc(arquivo);
//         if(ch >= 0 && ch <= 127 && ch != ' ' && ch != '\n'){
//             qtdCaracteresValidos++;
//         }
//     }
//     printf("Quantidade de caracteres validos: %d", qtdCaracteresValidos);
//     fclose(arquivo);
// }



//3 Escreva um programa que leia um arquivo de texto e conte o número de
//linhas e palavras no arquivo.

int main(){

    char frase[30];
    int qtdLinhas = 0;
    int qtdPalavras = 0;

    FILE *arquivo;
    arquivo = fopen("arq.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }
    while(fgets(frase, sizeof(frase), arquivo) != NULL){
        qtdLinhas++;
        char *palavra = strtok(frase, " \t\n");
        while(palavra != NULL){
            qtdPalavras++;
            palavra = strtok(NULL, " \t\n");
        }
    }
    printf("Qtd de palavras: %d", qtdPalavras);
    printf("\nQtd de linhas: %d", qtdLinhas);


}