// Ex001
// #include <stdio.h>

// int main(){

//     int matriz[4][4], soma = 0, media = 0, qtdDiagonal = 0, somaTrianguloInferior = 0;

//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             printf("Digite um valor da matriz: ");
//             scanf("%d", &matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Diagonal principal: \n");

//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             if(i == j){
//                 printf("[ %d ]",matriz[i][j]);
//                 soma+=matriz[i][j];
//                 qtdDiagonal++;
//             } else{
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     media = soma / qtdDiagonal;
//     printf("\nA media da diagonal principal e: %d\n\n", media);
//     printf("Diagonal secundaria: \n");

//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             if(i + j == 3){
//                 printf("[ %d ]",matriz[i][j]);
//             } else{
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     printf("\nElementos do triangulo superior da diagonal principal: \n");

//      for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             if(j > i){
//                 printf("[ %d ]",matriz[i][j]);
//             } else{
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     printf("\nTriangulo inferior da diagonal secundaria: \n");

//      for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             if(i + j > 3){
//                 printf("[ %d ]", matriz[i][j]);
//                 somaTrianguloInferior+=matriz[i][j];
//             } else{
//                 printf("[ * ]");
//             }
//         }
//         printf("\n");
//     }

//     printf("A soma do triangulo inferior da diagonal secundaria e: %d", somaTrianguloInferior);

//     return 0;
// }

// Ex002

// #include <stdio.h>

// int main(){

//     int matriz[2][4], transposta[4][2];
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 4; j++){
//             printf("Digite um valor para a matriz: ");
//             scanf("%d", &matriz[i][j]);
//             transposta[j][i] = matriz[i][j];
//         }
//     }

//     printf("Matriz original: \n");

//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 4; j++){
//             printf("[ %d ]", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Matriz transposta: \n");

//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 2; j++){
//             printf("[ %d ]", transposta[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }





// Ex triangulo

// #include <stdio.h>

// int main()
// {

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (i + j >= 4)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }





//chat gpt

#include <stdio.h>

int main() {
    int i, j, height;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {

        for (j = 1; j <= height - i; j++) {
            printf(" ");
        }
     
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}




