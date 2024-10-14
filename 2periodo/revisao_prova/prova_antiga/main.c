#include <stdio.h>
int main(){
    int tamanho = 3, matriz[tamanho][tamanho];
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("Digite o valor na posicao [%d][%d]: ", i, j);
            scanf("%d", &)
        }
        printf("\n");
    }

    return 0;
}






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