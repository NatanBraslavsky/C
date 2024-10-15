#include <stdio.h>

// int main(){

//     int matriz[4][4], soma = 0;
//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             printf("Digite um valor: ");
//             scanf("%d", &matriz[i][j]);
//             if(i == j){
//                 soma+=matriz[i][j];
//             }
//         }
//     }
//     printf("Soma: %d", soma);

//     return 0;
// }




// float medIdade(float idade[]);

// int main(){

//     float idade[5], media;
//     for(int i = 0; i < 5; i++){
//         printf("Idade: ");
//         scanf("%f", &idade[i]);
//     }
//     media = medIdade(idade);
//     printf("Media: %.2f", media);
//     return 0;
// }

// float medIdade(float idade[]){
//     float med = 0, soma = 0;
//     for(int i = 0; i < 5; i++){
//         soma+=idade[i];
//     }
//     med = soma / 5;
//     return med;
// }




// void contarMaiusculas(char *string, int *qtdMaiuscula);

// int main(){

//     char frase[50];
//     int tamanho = 0;
//     printf("Digite algo: ");
//     fgets(frase, sizeof(frase), stdin);
//     contarMaiusculas(frase, &tamanho);
//     printf("Qtd de maiusculas: %d", tamanho);

//     return 0;
// }

// void contarMaiusculas(char *string, int *qtdMaiuscula){
//     while(*string != '\0'){
//         if(*string >= 'A' && *string <= 'Z'){
//             (*qtdMaiuscula)++;
//         }
//         string++;
//     }
// }




// int main(){

//     int matriz[2][3], transposta[3][2];
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             printf("Digite um valor: ");
//             scanf("%d", &matriz[i][j]);
//             transposta[j][i] = matriz[i][j];
//         }
//         printf("\n");
//     }
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             printf("[%d]", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 2; j++){
//             printf("[%d]", transposta[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


void maiorVetor(int vetor[], int *maior){
    for(int i = 0; i < 4; i++){
        if(*(vetor + i) > *maior){
            *maior = *(vetor + i);
        }
    }
}

int main(){

    int vetor[4], maior = 0;
    for(int i = 0; i < 4; i++){
        printf("Digite: ");
        scanf("%d", &vetor[i]);
    }
    maiorVetor(vetor, &maior);
    printf("Maior: %d", maior);
    return 0;
}