// Número 1

// #include <stdio.h>

// int main (){

//     int matrizA[2][4];
//     int escalar = 2;

//     for(int i = 0; i < 2; i ++){
//         for(int j = 0; j < 4; j++){
//             printf("Digite o valor da matriz: ");
//             scanf("%d", &matrizA[i][j]);
//             matrizA[i][j] *= escalar;
//         }
//     }

//     for(int i = 0; i < 2; i ++){
//         for(int j = 0; j < 4; j++){
//             printf("%d ", matrizA[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }







//Número 2

// #include <stdio.h>

// int main(){

//     int matrizA[3][3];
//     int matrizB[3][3];
//     int matrizResultado[3][3];
//     int escalar = 3;

//     for(int i = 0; i < 3; i ++){
//         for(int j = 0; j < 3; j ++){
//             printf("Digite o valor da matriz A: ");
//             scanf("%d", &matrizA[i][j]);
//             matrizA[i][j] *= escalar;
//         }
//     }

//     for(int i = 0; i < 3; i ++){
//         for(int j = 0; j < 3; j ++){
//             printf("Digite o valor da matriz B: ");
//             scanf("%d", &matrizB[i][j]);
//         }
//     }

//     for(int i = 0; i < 3; i ++){
//         for(int j = 0; j < 3; j ++){
//             matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
//         }
//     }

//     for(int i = 0; i < 3; i ++){
//         for(int j = 0; j < 3; j ++){
//             printf("%d ", matrizResultado[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }









#include <stdio.h>

int main(){

    int matriz[5][2];

    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 2; j ++){
            printf("Digite um valor da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz original: \n");
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 2; j ++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Valor da matriz transposta: \n");

    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 5; j ++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
} 