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


// int maiorPeso(int peso[]);

// int main(){

//     int peso[4], maior = 0;
//     for(int i = 0; i < 4; i++){
//         printf("Digite o peso %d: ", i+1);
//         scanf("%d", &peso[i]);
//     }
//     maior = maiorPeso(peso);
//     printf("Maior peso: %d", maior);

//     return 0;
// }


// int maiorPeso(int peso[]){
//     int maior = 0;
//     for(int i = 0; i < 4; i++){
//         if(peso[i] > maior){
//             maior = peso[i];
//         }
//     }
//     return maior;
// }





// void contarPalavra(char *frase, int *qtdPalavra);

// int main(){

//     char frase[100];
//     int qtdPalavra = 0;
//     printf("Digite uma frase: ");
//     fgets(frase, sizeof(frase), stdin);
//     contarPalavra(frase, &qtdPalavra);
//     printf("A quantidade de palavras na frase: %d", qtdPalavra);

//     return 0;
// }

// void contarPalavra(char *frase, int *qtdPalavra){
//     while(*frase != '\0'){
//         if(*frase == ' ' || *frase == '\n'){
//             (*qtdPalavra)++;
//         }
//         frase++;
//     }
// }



//!prova2


//!n1
// int main(){

//     float matriz[4][4], soma = 0, media = 0, qtdDiagonal = 0;
//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             printf("Digite um valor: ");
//             scanf("%f", &matriz[i][j]);
//             if(i == j){
//                 qtdDiagonal++;
//                 soma+=matriz[i][j];
//             }
//         }
//         printf("\n");
//     }
//     media = soma / qtdDiagonal;
//     printf("Diagonal principal: \n");
//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             if(i == j){
//                 printf("[%.1f]", matriz[i][j]);
//             }else{
//                 printf("[ ]");
//             }
//         }
//         printf("\n");
//     }
//     printf("Media: %.2f", media);
//     return 0;
// }


//!n2
// int menorTres(int vet[]);

// int main(){

//     int num[3], menor;
//     for(int i = 0; i < 3; i++){
//         printf("Digite um valor: ");
//         scanf("%d", &num[i]);
//     }
//     menor = menorTres(num);
//     printf("Menor: %d", menor);

//     return 0;
// }

// int menorTres(int vet[]){
//     int menor = 0;
//     for(int i = 0; i < 3; i++){
//         if(vet[i] < menor || i == 0){
//             menor = vet[i];
//         }
//     }
//     return menor;
// }


//!n3
void contar_vogais(char *str, int *qtdVog);

int main(){

    char string[50];
    int qtdVogal = 0;
    printf("Digite algo: ");
    fgets(string, sizeof(string), stdin);
    contar_vogais(string, &qtdVogal);
    printf("Quantidade de vogais: %d", qtdVogal);

    return 0;
}

void contar_vogais(char *str, int *qtdVog){
    while(*str != '\0'){
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'){
            (*qtdVog)++;
        }
        str++;
    }
}
