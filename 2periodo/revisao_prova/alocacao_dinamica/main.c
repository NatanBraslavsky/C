#include <stdio.h>
#include <stdlib.h>

// int main(){

//     int tamanhoVet = 0;
//     printf("Digite o tamanho do vetor: ");
//     scanf("%d", &tamanhoVet);
//     int *vetor;
//     vetor = (int*)malloc(tamanhoVet * sizeof(int));
//     if(vetor == NULL){
//         printf("ERRO.");
//         return 1;
//     }
//     for(int i = 0; i < tamanhoVet; i++){
//         printf("Digite o valor na posicao %d: ", i);
//         scanf("%d", &vetor[i]);
//     }
//     printf("\nVetor: \n");
//     for(int i = 0; i < tamanhoVet; i++){
//         printf("%d ", vetor[i]);
//     }
//     free(vetor);

//     return 0;
// }




// int main(){

//     int linhas = 3, colunas = 2;
//     int **matriz;
//     matriz=(int**)malloc(linhas * sizeof(int*));
//     if(matriz == NULL){
//         printf("ERRO.");
//         return 1;
//     }
//     for(int i = 0 ; i < linhas; i++){
//         matriz[i] = (int*)malloc(colunas * sizeof(int));
//     }
//     for(int i = 0; i < linhas; i++){
//         for(int j = 0; j < colunas; j++){
//             printf("Digite um valor: ");
//             scanf("%d", &matriz[i][j]);
//         }
//     }
//     printf("Matriz: \n");
//     for(int i = 0; i < linhas; i++){
//         for(int j = 0; j < colunas; j++){
//             printf("[%d]", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i = 0; i < linhas; i++){
//         free(matriz[i]);
//     }
//     free(matriz);

//     return 0;
// }

char *preencherVetor(int tam){
    char *vet = (char*)malloc(tam * sizeof(char));
    if(vet == NULL){
        printf("ERRO.");
        return NULL;
    }
    for(int i = 0; i < tam; i++){
        *(vet + i) = 'a' + i;
    }
    return vet;
}

int main(){

    int tamanho = 10;
    char *vetor;
    vetor = preencherVetor(tamanho);
    for(int i = 0; i < tamanho; i++){
        printf("%c ", vetor[i]);
    }
    free(vetor);

    return 0;
}



