#include <stdio.h>

// !Faça o produto entre duas matrizes, sendo elas 3x2 e 2x3 respectivamente.
// int main(){

// int matrizA[3][2], matrizB[2][3], matrizR[3][3] = {0};

// for(int i = 0; i < 3; i++){
//     for(int j = 0; j < 2; j++){
//         matrizA[i][j] = i+j;
//     }
// }
// for(int i = 0; i < 2; i++){
//     for(int j = 0; j < 3; j++){
//         matrizB[i][j] = i+j+10;
//     }
// }
// printf("Matriz A: \n");
// for(int i = 0; i < 3; i++){
//     for(int j = 0; j < 2; j++){
//         printf("[%d]", matrizA[i][j]);
//     }
//     printf("\n");
// }
// printf("Matriz B: \n");
// for(int i = 0; i < 2; i++){
//     for(int j = 0; j < 3; j++){
//         printf("[%d]", matrizB[i][j]);
//     }
//     printf("\n");
// }
// printf("Resultado: \n");
// for(int i = 0; i < 3; i++){
//     for(int j = 0; j < 3; j++){
//         for(int k = 0; k < 2; k++){
//             matrizR[i][j] += matrizA[i][k] * matrizB[k][j];
//         }
//         printf("[%d]", matrizR[i][j]);
//     }
//     printf("\n");
// }
// for(int i = 0; i < 3; i++){
//     for(int j = 0; j < 3; j++){
//         printf("[%d]", matrizR[i][j]);
//     }
//     printf("\n");
// }
// return 0;
// }




// !Faça o produto entre uma matriz e um escalar, sendo a matriz 3x2. Todos os valores
// !serão informados pelo usuário.

// int main(){

//     int matriz[3][2], escalar;
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 2; j++){
//             printf("Digite um valo: ");
//             scanf("%d", &matriz[i][j]);
//         }
//     }
//     printf("Digite o escalar: ");
//     scanf("%d", &escalar);
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 2; j++){
//             matriz[i][j]*=escalar;
//             printf("[%d]", matriz[i][j]);
//         }
//         printf("\n");
//     }


//     return 0;
// }





// !Exiba as diagonais principal e secundária de uma matriz 4x4.

// int main(){
//     int tamanhoMatriz, qtd = 0;
//     printf("Digite o tamanho da linha/coluna da matriz: ");
//     scanf("%d", &tamanhoMatriz);
//     float matriz[tamanhoMatriz][tamanhoMatriz], soma = 0,somaTriangulo = 0, media = 0;
//     for(int i = 0; i < tamanhoMatriz; i++){
//         for(int j = 0; j < tamanhoMatriz; j++){
//             printf("Digite o valor na posicao [%d][%d]: ", i, j);
//             scanf("%f", &matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Diagonal principal da matriz: \n");
//     for(int i = 0; i < tamanhoMatriz; i++){
//         for(int j = 0; j < tamanhoMatriz; j++){
//             if(i == j){
//                 printf("[%.0f]", matriz[i][j]);
//                 qtd++;
//                 soma+=matriz[i][j];
//             } else{
//                 printf("[ ]");
//             }
//         }
//         printf("\n");
//     }
//     printf("Diagonal secundaria da matriz: \n");
//     for(int i = 0; i < tamanhoMatriz; i++){
//         for(int j = 0; j < tamanhoMatriz; j++){
//             if(i + j == tamanhoMatriz - 1){
//                 printf("[%.0f]", matriz[i][j]);
//             } else{
//                 printf("[ ]");
//             }
//         }
//         printf("\n");
//     }
//     media = soma/qtd;
//     //!Obtenha a média dos valores da diagonal principal da matriz acima.
//     printf("Media: %.2f\n", media);
//     //!Exiba elementos do triângulo superior da diagonal principal.
//     printf("Elementos da diagonal superior da matriz: \n");
//     for(int i = 0; i < tamanhoMatriz; i++){
//         for(int j = 0; j < tamanhoMatriz; j++){
//             if(j > i){
//                 printf("[%.0f]", matriz[i][j]);
//             } else{
//                 printf("[ ]");
//             }
//         }
//         printf("\n");
//     }
//     //!Obtenha a soma dos elementos do triângulo inferior à diagonal secundária.
//     for(int i = 0; i < tamanhoMatriz; i++){
//         for(int j = 0; j < tamanhoMatriz; j++){
//             if(i + j >= tamanhoMatriz){
//                 somaTriangulo+=matriz[i][j];
//             }
//         }
//     }
//     printf("Soma do triângulo inferior da secundaria: %.0f",somaTriangulo);
//     return 0;
// }