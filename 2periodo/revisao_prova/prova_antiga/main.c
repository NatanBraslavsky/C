#include <stdio.h>
// int main(){
//     int tamanho = 3, matriz[tamanho][tamanho], soma = 0, media = 0, qtdM = 0;
//     for(int i = 0; i < tamanho; i++){
//         for(int j = 0; j < tamanho; j++){
//             printf("Digite o valor na posicao [%d][%d]: ", i, j);
//             scanf("%d", &matriz[i][j]);
//             if(i + j == tamanho - 1){
//                 soma+=matriz[i][j];
//                 qtdM++;
//             }
//         }
//         printf("\n");
//     }
//     for(int i = 0; i < tamanho; i++){
//         for(int j = 0; j < tamanho; j++){
//             if(i + j == tamanho - 1){
//                 printf("[%d]", matriz[i][j]);
//             } else{
//                 printf("[ ]");
//             }
//         }
//         printf("\n");
//     }
//     media = soma/qtdM;
//     printf("A media: %d", media);

//     return 0;
// }


int maiorPeso(int peso[]);

int main(){

    int peso[4], maior = 0;
    for(int i = 0; i < 4; i++){
        printf("Digite o peso %d: ", i+1);
        scanf("%d", &peso[i]);
    }
    maior = maiorPeso(peso);
    printf("Maior peso: %d", maior);

    return 0;
}


int maiorPeso(int peso[]){
    int maior = 0;
    for(int i = 0; i < 4; i++){
        if(peso[i] > maior){
            maior = peso[i];
        }
    }
    return maior;
}





void contarPalavra(char *frase, int *qtdPalavra);

int main(){

    char frase[100];
    int qtdPalavra = 0;
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    contarPalavra(frase, &qtdPalavra);
    printf("A quantidade de palavras na frase: %d", qtdPalavra);

    return 0;
}

void contarPalavra(char *frase, int *qtdPalavra){
    while(*frase != '\0'){
        if(*frase == ' ' || *frase == '\n'){
            (*qtdPalavra)++;
        }
        frase++;
    }
}