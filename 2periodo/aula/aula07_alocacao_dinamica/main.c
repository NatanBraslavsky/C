#include <stdio.h>
#include <stdlib.h>
// int main(){
//     int *p;
//     p = (int *)malloc(5*sizeof(int));
//     if(p == NULL){
//         printf("Error. Memoria insuficiente.");
//         return 1;
//     }
//     for(int i = 0; i < 5; i++){
//         printf("Digite o valor da posicao %d: ", i+1);
//         scanf("%d", &p[i]);
//     }
//     printf("Valores: ");
//     for(int i = 0; i < 5; i++){
//         printf("%d, ", p[i]);
//     }
//     return 0;
// }



// int main(){
//     int *p;
//     p = (int*)malloc(5 * sizeof(int));
//     for(int i = 0; i < 5; i++){
//         *(p + i) = i;
//     }
//     for(int i = 0; i < 5; i++){
//         printf("%d\n", *(p + i));
//     }
//     printf("\n");
//     p = realloc(p, 3 * sizeof(int));
//     for(int i = 0; i < 5; i++){
//         printf("%d\n", *(p + i));
//     }
//     printf("\n");
//     p = realloc(p, 10 * sizeof(int));
//     for(int i = 0; i < 10; i++){
//         printf("%d\n", *(p + i));
//     }
//     return 0;
// }



//!ex01
// int main (){

//     float tamanho = 0, soma = 0, media = 0;
//     printf("Digite o tamanho do array: ");
//     scanf("%f", &tamanho);
//     float *p; 
//     p = (float*)malloc(tamanho * sizeof(float));
//     if(p == NULL){
//         printf("Error. Memoria insuficiente.");
//         return 1;
//     }
//     for(int i = 0; i < tamanho; i++){
//         printf("Digite o numero na posicao %d", i+1);
//         scanf("%f", &p[i]);
//         soma += p[i];
//     }
//     media = soma / tamanho;
//     printf("A media e %.2f", media);
//     free(p);
    
//     return 0;
// }



//2. Crie uma matriz bidimensional de tamanho 3x2 dinamicamente. Aloque a
// memória para a matriz e peça ao usuário para preencher com valores
// inteiros. Após isto exiba todos os valores digitados pelo usuário.

// int main(){

//     int **p, maior = 0, menor = 0;
//     p = (int**)malloc(3 * sizeof(int*));
//     if(p == NULL){
//         printf("ERRO! Memoria insuficiente.");
//         return 1;
//     }
//     for(int i = 0; i < 3; i++) {
//         p[i] = (int *)malloc(2 * sizeof(int));
//     }
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 2; j++){
//             printf("Digite um valor na posicao[%d][%d]: ", i, j);
//             scanf("%d", &p[i][j]);
//         }
//     }
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 2; j++){
//             printf("[%d] ", p[i][j]);
//             if(p[i][j] > maior){
//                 maior = p[i][j];
//             }
//             if(p[i][j] < menor || (i == 0 && j == 0)){
//                 menor = p[i][j];
//             }
//         }
//         printf("\n");
//     }
//     printf("O maior valor: %d\nO menor valor: %d", maior, menor);
//     for(int i = 0; i < 3; i++){
//         free(p[i]);
//     }
//     free(p);

//     return 0;
// }



// 3 - Desenvolva uma função que recebe como parâmetro o número de
// elementos para um novo vetor que deverá ser alocado e retornado pela
// função. O vetor deve ser inicializado com letras minúsculas do alfabeto.
// Segue a função main() ainda incompleta.

char* preencheAlfabeto(int tam);

int main(){

    int tam = 10;
    char *vetor;
    vetor = preencheAlfabeto(tam);
     if(vetor == NULL){
         printf("ERRO. Memoria insufisiente");
         return 1;
   }
    for(int i = 0; i < tam; i++){
        printf("[%c]", vetor[i]);
    }
    free(vetor);

    return 0;
}

char* preencheAlfabeto(int tam){
    char *vet;
    vet = (char*)malloc(tam * sizeof(char));
    if(vet == NULL){
        printf("ERRO");
        return 1;
    }
    for(int i = 0; i < tam; i++){
        *(vet + i) = 'a' + i;
    }
    return vet;
}




