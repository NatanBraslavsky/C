 //Exercício 1

//  #include <stdio.h>

//  int main(){

//     int matrizA[3][2];
//     int matrizB[2][3];
//     int matrizResultado[3][3] = {0};

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 2; j++){
//             printf("Preencha a matriz A: ");
//             scanf("%d", &matrizA[i][j]);
//         }
//     }

//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             printf("Preencha a matriz B: ");
//             scanf("%d", &matrizB[i][j]);
//         }
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             for(int k = 0; k < 2; k++){
//                 matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
//             }
//         }
//     }
//     printf("Resultado: \n");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("[%d] ", matrizResultado[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
//  }







// Exercício 2
#include <stdio.h>

int main (){

    int matriz[3][2];
    int matrizEscalar[3][2];
    int escalar = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite um numero da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o escalar: ");
    scanf("%d", &escalar);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            matrizEscalar[i][j] = escalar * matriz[i][j];
        }
    }
    printf("Valor da matriz com escalar: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", matrizEscalar[i][j]);
        }
        printf("\n");
    }


    return 0;
}