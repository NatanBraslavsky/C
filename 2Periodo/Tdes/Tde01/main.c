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






// Número 2

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






// Número 3

// #include <stdio.h>

// int main(){

//     int matriz[5][2];

//     for(int i = 0; i < 5; i ++){
//         for(int j = 0; j < 2; j ++){
//             printf("Digite um valor da matriz: ");
//             scanf("%d", &matriz[i][j]);
//         }
//     }
//     printf("Matriz original: \n");
//     for(int i = 0; i < 5; i ++){
//         for(int j = 0; j < 2; j ++){
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Valor da matriz transposta: \n");

//     for(int i = 0; i < 2; i ++){
//         for(int j = 0; j < 5; j ++){
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }






// Número 4
//  #include <stdio.h>

// int main()
// {

//   int matrizA[4][2], matrizB[2][4], matrizResultado[4][4] = {0};

//   for (int i = 0; i < 4; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       printf("Digite o valor da %da linha e %da coluna: ", i + 1, j + 1);
//       scanf("%d", &matrizA[i][j]);
//     }
//     printf("\n");
//   }
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 4; j++)
//     {
//       printf("Digite o valor da %da linha e %da coluna: ", i + 1, j + 1);
//       scanf("%d", &matrizB[i][j]);
//     }
//     printf("\n");
//   }
//   for (int i = 0; i < 4; i++)
//   {
//     for (int j = 0; j < 4; j++)
//     {
//       for (int k = 0; k < 2; k++)
//       {
//         matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
//       }
//     }
//   }
//   printf("Resultado: \n");
//   for (int i = 0; i < 4; i++)
//   {
//     for (int j = 0; j < 4; j++)
//     {
//       printf("[%d] ", matrizResultado[i][j]);
//     }
//     printf("\n");
//   }

//   return 0;
// }





// Número 5

// #include <stdio.h>

// int main(){

//     int matriz[3][3];

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("Digite o valor da %da linha e %d coluna: ", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(i < j){
//                 printf("[%d]  ", matriz[i][j]);
//             }
//             else {
//                 printf("[*]  ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }






//Número 6

// #include <stdio.h>

// int main(){

//     int matriz[4][4], soma=0;

//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             printf("Digite o valor da %d linha e %d coluna: ", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//             if(i == j || i > j){
//                 soma+=matriz[i][j];
//             }
//         }
//         printf("\n");
//     }

//     printf("Matriz: \n");

//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             printf("[%d] ", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Soma do triangulo inferior incluindo a diagonal principal: %d\n", soma);

//     return 0;
// }






//Número 7
// [00][01][02]
// [10][11][12]
// [20][21][22]

// #include <stdio.h>

// int main(){

//     int matriz[3][3], maior=0; 

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("Digite o valor da %d linha e %d coluna: ", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//             if(i+j < 2){
//                 if(matriz[i][j] > maior){
//                     maior = matriz[i][j];
//                 }
//             }
//         }
//         printf("\n");
//     }

//     printf("Os valores a cima da diagonal secundária são: \n");

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(i+j < 2){
//                 printf("[%d] ", matriz[i][j]);
//             } else {
//                 printf("[*] ");
//             }
//         }
//         printf("\n");
//     }

//     printf("E o seu maior valor é: %d", maior);

//     return 0;
// }





//Número 8

// #include <stdio.h>

// int main(){


//     float matriz[4][4], soma = 0, media = 0;
//     int qtd = 0;

//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             printf("Digite o valor da %da linha e %da coluna: ", i+1, j+1);
//             scanf("%f", &matriz[i][j]);
//             if(i + j > 3){
//                 soma+=matriz[i][j];
//                 qtd++;
//             }
//         }
//         printf("\n");
//     }
//     media = soma / qtd;

//     printf("Os valores abaixo da diagonal secundaria: \n");

//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             if(i + j > 3){
//                 printf("[%.0f] ", matriz[i][j]);
//             } else{
//                 printf("[*] ");
//             }
//         }
//         printf("\n");
//     }

//     printf("A media desses valores: %.2f", media);

//     return 0;
// }






//Número 9

// #include <stdio.h>

// int soma(int n1, int n2){
//     return n1+n2;
// }

// int subtracao(int n1, int n2){
//     return n1-n2;
// }

// int divisao(int n1, int n2){
//     return n1 / n2;
// }

// int multiplicacao(int n1, int n2){
//     return n1 * n2;
// }

// int main(){

//     int num1 = 0;
//     int num2 = 0;
//     int operacao = 0;

//     printf("Digite um numero: ");
//     scanf("%d", &num1);
//     printf("Digite outro numero: ");
//     scanf("%d", &num2);
//     printf("Digite a operacao:\n1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n");
//     scanf("%d", &operacao);

//     switch(operacao){
//         case 1:
//         printf("%d + %d = %d", num1, num2, soma(num1, num2));
//         break;

//         case 2:
//         printf("%d - %d = %d", num1, num2, subtracao(num1, num2));
//         break;

//         case 3:
//         printf("%d / %d = %d", num1, num2, divisao(num1, num2));
//         break;

//         case 4:
//         printf("%d * %d = %d", num1, num2, multiplicacao(num1, num2));
//         break;

//         default:
//         printf("Valor invalido.");
//     }
    
//     return 0;
// }