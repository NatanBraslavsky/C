#include <stdio.h>
#include <string.h>

int main(){

    // char nomes[4][30];

    // for(int i = 0; i < 4; i++){
    //     printf("Digite seu nome: ");
    //     scanf("%s", nomes[i]);
    // }

    // for(int i = 0; i < 4; i++){
    //     printf("%s\n", nomes[i]);
    // }







    // int idades[3][2];
    // int qtdMaior = 0;
    // int abaixo[3][2];

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 2; j++){
    //         printf("Digite sua idade: ");
    //         scanf("%d", &idades[i][j]);
    //         if(idades[i][j] >= 18){
    //             qtdMaior++;
    //         } else if(idades[i][j] < 18){
    //             abaixo[i][j] = idades[i][j];
    //         }
    //     }
    // }
    // printf("Qtd maior ou igual a 18: %d\n", qtdMaior);
    // printf("Idades abaixo de 18: \n");
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 2; j++){
    //         if(idades[i][j] < 18){
    //             printf("%d ", abaixo[i][j]);
    //         }
    //     }
    // }






    // char nomes[3][30], menorNome[30];
    // int tam = 0, maiorTam = 0, menorTam = 0, comp = 0, teste = 0;

    // for(int i = 0; i < 3; i++){
    //     printf("Digite seu nome: ");
    //     scanf("%s", nomes[i]);
    //     tam = strlen(nomes[i]);
    //     if(tam > maiorTam){
    //         maiorTam = tam;
    //     }
    //     if(tam < menorTam || i == 0){
    //         menorTam = tam;
    //         strcpy(menorNome, nomes[i]);
    //     }
    //     comp = strcasecmp(nomes[i], "Ana");
    //     if(comp == 0){
    //         teste = 1;
    //     }
    // }
    // printf("Maior qtd de caracteres: %d\n", maiorTam);
    // printf("Menor nome: %s\n", menorNome);
    // if(teste == 1){
    //     printf("Ana foi digitado! ");
    // }
    // printf("\n");







    char nomes[4][30], maisVelha[30], elegante[30];
    int idades[4], soma = 0, media = 0, maisVelhaIdade = 0, qtdPar = 0;

    for(int i = 0; i < 4; i++){
        printf("Digite seu nome: ");
        scanf("%s", nomes[i]);
        printf("Digite sua idade: ");
        scanf("%d", &idades[i]);
        soma += idades[i];
        if(idades[i] > maisVelhaIdade){
            maisVelhaIdade = idades[i];
            strcpy(maisVelha, nomes[i]);
        }
        if(idades[i] % 2 == 0){
            qtdPar++;
        }
    }
    strcpy(elegante, "Sr(a)");
    strcat(elegante, maisVelha);
    media = soma / 4;
    printf("Media: %d\n", media);
    printf("Nome da pessoa mais velha: %s", elegante);
    printf("\nQtd par: %d\n", qtdPar);
    printf("\n");
    
    return 0;
}