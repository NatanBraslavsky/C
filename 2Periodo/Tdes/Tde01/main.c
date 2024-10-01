#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Número 1


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





//Número 10
// #include <stdio.h>


// int tabuada(int n){
//     for(int i = 1; i < n; i++){
//         int valor = 0;
//         valor = 7 * i;
//         printf("%d * 7 = %d\n",i, valor);
//     }
//     return 0;
// }


// int main(){

//     int num = 0;

//     printf("Digite um numero: ");
//     scanf("%d", &num);
//     tabuada(num);

//     return 0;
// }






//Número 11

// #include <stdio.h>

// int maiorValor(int x, int y, int z){
    
//     int maior = 0;
//     maior = x;
//     if(y > maior){
//         maior = y;
//     }
//     if(z > maior){
//         maior = z;
//     }
//     return maior;
// }

// int main(){

//     int n1=0, n2=0, n3=0;

//     printf("Digite um valor: ");
//     scanf("%d", &n1);
//     printf("Digite um valor: ");
//     scanf("%d", &n2);
//     printf("Digite um valor: ");
//     scanf("%d", &n3);
//     printf("O maior e: %d", maiorValor(n1, n2, n3));

//     return 0;
// }





//Número 12

// #include <stdio.h>

// int calculo(int n, int s){

//     int porcent = 0;

//     switch(n){
//         case 's':
//         case 'S':
//         porcent = s*5/100;
//         break;

//         case 'p':
//         case 'P':
//         porcent = s*10/100;
//         break;

//         case 'j':
//         case 'J':
//         porcent = s*15/100;
//         break;

//     }
//     return porcent; 
// }



// int main(){

//     float salario = 0;
//     char nivel;
//     printf("Digite seu salario: ");
//     scanf("%f", &salario);
//     printf("Digite seu nivel de experiencia: ");
//     scanf(" %c", &nivel);
//     printf("Seu salario sera de R$%.2f", calculo(nivel, salario)+salario);

//     return 0;
// }






//Número 13

// #include <stdio.h>


// int soma(int x, int y, int z){
//     return x+y+z;
// }

// int media(int x, int y, int z){
//     return soma(x, y, z)/3;
// }

// int main(){

//     int n1 = 0, n2 = 0, n3 = 0, med=0;

//     printf("Digite um numero: ");
//     scanf("%d", &n1);    
//     printf("Digite um numero: ");
//     scanf("%d", &n2);    
//     printf("Digite um numero: ");
//     scanf("%d", &n3);    
//     med = media(n1, n2, n3);
//     printf("A media e: %d", med);

//      return 0;
// }







//Número 14

// #include <stdio.h>

// int pts(float x, float y){
//     return x*3+y;
// }


// int main(){

//     float vitorias = 0, empates = 0, derrotas = 0, qtd = 0;

//     printf("Quantidade de vitorias: ");
//     scanf("%f", &vitorias);
//     printf("Quantidade de empates: ");
//     scanf("%f", &empates);
//     printf("Quantidade de derrotas: ");
//     scanf("%f", &derrotas);
//     qtd = vitorias+empates+derrotas;
//     printf("A quantidade de pontos totais: %d", pts(vitorias, empates));
//     printf("\nA media de pontos por partida: %.2f", pts(vitorias, empates) / qtd);

//     return 0;
// }



//Número 15
// int main(){
//     //a-)25 6422296 6422296 25 50 6422292
//     //b-)a = valor de a; pa = endereço de a; &a = endereço de a; *pa = valor apontando para o endereço de a, b = resultado da soma 25 + 25; &b = endereço de b
//     int a = 25;
//     int *pa = &a;
//     int b = *pa + a;
//     printf("%d %d %d %d %d %d \n", a, pa, &a, *pa, b, &b);

//     return 0;
// }




//Número 16
// void contar_vogais (char *str, int *numCaracteres);
 
// int main(){

//     char string[50];
//     int qtdVogais = 0;

//     printf("Digite um string: ");
//     fgets(string, sizeof(string), stdin);    
//     contar_vogais(string, &qtdVogais);
//     printf("A quantidade de vogais minusculas: %d", qtdVogais);

//     return 0;
// }

// void contar_vogais (char *str, int *numCaracteres){
//     int cont = 0;
//     while(str[cont] != '\0'){
//         char c = str[cont];
//         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//             *numCaracteres+=1; 
//         }
//         cont++;
//     }
// }



//Número 17

// void calcular_hexagono(float l, float *area, float *perimetro);

// int main(){
//     float l = 0, area= 0, perimetro = 0;
//     printf("Digite o lado do lado do hexagono: ");
//     scanf("%f", &l);
//     calcular_hexagono(l, &area, &perimetro);
//     printf("Area: %.2f\nPerimetro: %.2f", area, perimetro);
// }

// void calcular_hexagono(float l, float *area, float *perimetro){
//     *area = (3*(pow(l, 2))*sqrt(3))/2;
//     *perimetro = 6*l;
// }




//Número 18
// char validarSituacao(float p1, float p2, float p3, int faltas, int aulas, float *media, float *porcentagem);

// int main(){
//     float n1, n2, n3, media, porcentagem;
//     int faltas, aulas;
    
//     printf("Digite a nota 1: ");
//     scanf("%f", &n1);
//     printf("Digite a nota 2: ");
//     scanf("%f", &n2);
//     printf("Digite a nota 3: ");
//     scanf("%f", &n3);
//     printf("Quantidade de aulas: ");
//     scanf("%d", &aulas);
//     printf("Quantidade de faltas: ");
//     scanf("%d", &faltas);
    

//     switch(validarSituacao(n1, n2, n3, faltas, aulas, &media, &porcentagem)){
//         case 'A':
//         printf("Sua media foi: %.2f\n", media);
//         printf("Porcentagem de faltas: %.1f%%\n", porcentagem);
//         printf("Situacao: Aprovado!");
//         break;

//         case 'R':
//         printf("Sua media foi: %.2f\n", media);
//         printf("Porcentagem de faltas: %.1f%%\n", porcentagem);
//         printf("Situacao: Reprovado!");
//         break;

//         case 'F':
//         printf("Sua media foi: %.2f\n", media);
//         printf("Porcentagem de faltas: %.1f%%\n", porcentagem);
//         printf("Situacao: Reprovado por falta!");
//         break;

//     }
// }

// char validarSituacao(float p1, float p2, float p3, int faltas, int aulas, float *media, float *porcentagem){
//     *media = (p1 + p2 + p3) / 3;
//     *porcentagem = (faltas * 100) / aulas;
//     if(*porcentagem > 25){
//         return 'F';
//     } else{
//         if(*media >= 6){
//             return 'A';
//         } else{
//             return 'R';
//         }
//     }
// }



//Número 19

// int verificar_pares (int *v);

// int main(){
//     int vetor[6];
//     int qtdpares = 0;
//     for(int i = 0; i < 6; i++){
//         printf("Digite o valor na posicao %d: ", i+1);
//         scanf("%d", &vetor[i]); 
//     }
//     qtdpares = verificar_pares(vetor);
//     printf("Quantidade de pares: %d", qtdpares);
//     return 0;
// }

// int verificar_pares(int *v){
//     int qtdPares = 0;
//     for(int i = 0; i < 6; i++){
//         if(*(v+i) % 2 == 0){
//             qtdPares++;
//         }
//     }
//     return qtdPares;
// }


//Número 20

// int inverter_vetor(int *v1, int *v2, int n);

// int main(){
//     int tamanho, maior;
//     printf("Digite o tamanho do vetor: ");
//     scanf("%d", &tamanho);
//     int vetor[tamanho], vetorInverso[tamanho];
//     for(int i = 0; i < tamanho; i++){
//         printf("Digite o valor na posicao %d: ", i + 1);
//         scanf("%d", &vetor[i]);
//     }
//     maior = inverter_vetor(vetor, vetorInverso, tamanho);
//     printf("Vetor invertido: ");
//     for(int i = 0; i < tamanho; i++){
//         printf("%d ", vetorInverso[i]);
//     }
//     printf("\nMaior valor: %d", maior);

//     return 0;
// }


//Número 21

// void multiplicar_escalar(int *v1, int *v2, int x, int n);

// int main(){

//     int tamanhoVetor;
//     int numMultiplicado;
//     printf("Digite o tamanho de vetor: ");
//     scanf("%d", &tamanhoVetor);
//     int vetor1[tamanhoVetor], vetor2[tamanhoVetor];
//     for(int i = 0; i < tamanhoVetor; i++){
//         printf("Digite o valor na posicao %d: ", i+1);
//         scanf("%d", &vetor1[i]);
//     }
//     printf("Digite o valor que deseja multiplicar o vetor: ");
//     scanf("%d", &numMultiplicado);
//     multiplicar_escalar(vetor1, vetor2, tamanhoVetor, numMultiplicado);
//     printf("Vetor multiplicado por %d: ", numMultiplicado);
//     for(int i = 0; i < tamanhoVetor; i++){
//         printf("%d ", vetor2[i]);
//     }
//     return 0;
// }

// void multiplicar_escalar(int *v1, int *v2, int x, int n){
//     for(int i = 0; i < x; i++){
//         *(v2 + i) = *(v1 + i) * n; 
//     }
// }


//Número 22

// int main(){

//     int *v, soma = 0;
//     v = (int*)malloc(5 * sizeof(int));
//     if(v == NULL){
//         printf("Error. Memoria insuficiente.");
//         return 1;
//     }
//     for(int i = 0; i < 5; i++){
//         printf("Digite o valor na posicao %d: ", i+1);
//         scanf("%d", &v[i]);
//         soma+=v[i];
//     }
//     printf("Soma: %d", soma);

//      free(v);

//     return 0;
// }


//Número 23

// int main(){
//     int tamanho;
//     printf("Digite o tamanho do vetor: ");
//     scanf("%d", &tamanho);
//     int *v1;
//     v1 = (int*)malloc(tamanho * sizeof(int));
//     if(v1 == NULL){
//         printf("ERRO. Memoria insuficiente");
//         return 1;
//     }
//     for(int i = 0; i < tamanho; i++){
//         printf("Digite o valor na posicao %d: ", i+1);
//         scanf("%d", &v1[i]);
//     }
//     int *copia;
//     copia = (int*)malloc(tamanho * sizeof(int));
//     for(int i = 0; i < tamanho; i++){
//         copia[i] = v1[i];
//         printf("%d ", copia[i]);
//     }
//     free(v1);
//     free(copia);
//     return 0;
//}


//Número 24

// int main(){

//     int *vetor, remover = 0, tamanho = 5;
//     vetor = (int*)malloc(tamanho * sizeof(int));
//     if(vetor == NULL){
//         printf("ERRO.");
//         return 1;
//     }
//     for(int i = 0; i < tamanho; i++){
//         printf("Digite um valor na posicao %d:", i+1);
//         scanf("%d", &vetor[i]);
//     }
//     printf("Vetor: ");
//     for(int i = 0; i < tamanho; i++){
//         printf("%d ", vetor[i]);
//     }
//     printf("Selecione um valor para remover: ");
//     scanf("%d", &remover);

//     int i,j;
//     for(i = 0; i < tamanho; i++){
//         if(vetor[i] == remover){
//             break;
//         }
//     }
//     if(i < tamanho){
//         for(j = i; j < tamanho-1; j++){
//             vetor[j] = vetor[j + 1];
//         }
//         tamanho--;
//     } else{
//         printf("Valor nao encontrado no vetor.");
//     }
//     vetor = realloc(vetor, tamanho * sizeof(int));
//     if (vetor == NULL && tamanho > 0) {
//         printf("ERRO: Falha ao redimensionar o vetor.\n");
//         return 1;
//     }
//     printf("Vetor com o valor removido: ");
//     for(int i = 0; i < tamanho; i++){
//         printf("%d ", vetor[i]);
//     }
//     free(vetor);
//     return 0;
// }


//Número 25

int main(){

    int linha = 3, coluna = 3, escalar;
    int **matriz;
    matriz = (int**)malloc(linha * sizeof(int*));
    if(matriz == NULL){
        printf("ERRO");
        return 1;
    }
    for(int i = 0; i < linha; i++){
        matriz[i] = (int*)malloc(coluna * sizeof(int));
    }
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            printf("Digite um valor na posicao[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o escalar: ");
    scanf("%d", &escalar);
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            matriz[i][j]*=escalar;
        }
    }
    printf("Matriz multiplicado com a escalar: \n");
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < linha; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}