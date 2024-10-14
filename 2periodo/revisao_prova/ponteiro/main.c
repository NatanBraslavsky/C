#include <stdio.h>

// void maiorMenor(int vetor[], int *maior, int *menor);

// int main(){

//     int vetor[4], maior = 0, menor = 0;
//     for(int i = 0; i < 4; i++){
//         printf("Digite um numero: ");
//         scanf("%d", &vetor[i]);
//     }
//     maiorMenor(vetor, &maior, &menor);
//     printf("Maior: %d\nMenor: %d", maior, menor);

//     return 0;
// }

// void maiorMenor(int vetor[], int *maior, int *menor){
//     for(int i = 0; i < 4; i++){
//         if(vetor[i] > *maior){
//             *maior = vetor[i];
//         }
//         if(vetor[i] < *menor || i == 0){
//             *menor = vetor[i];
//         }
//     }
// }




void mediaFunction(float vetor[], float *media){
    float soma = 0;
    for(int i = 0; i < 5; i++){
        soma+=vetor[i];
    }
    *media = soma/5;
}
int main(){

    float vetor[5], media;
    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }
    mediaFunction(vetor, &media);
    printf("Media: %.2f", media);

    return 0;
}