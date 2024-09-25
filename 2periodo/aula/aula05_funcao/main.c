//Número 1
// #include <stdio.h>

// float multiplicacao(float x, float y){
//     return x*y;
// }


// int main(){

//     float num1, num2;
//     printf("Digite um numero: ");
//     scanf("%f", &num1);
//     printf("Digite um numero: ");
//     scanf("%f", &num2);
//     printf("A multiplicacao entre %.2f e %.2f : %.2f", num1, num2, multiplicacao(num1, num2));

//     return 0;
// }



//Número 2
// #include <stdio.h>

// void votar(int x){
//     if(x >= 18 && x <= 70){
//         printf("Obrigado a votar.");
//     } else{
//         printf("Nao e obrigado a votar.");
//     }
// }

// int main(){
    
//     int idade;

//     printf("Digite sua idade: ");
//     scanf("%d", &idade);
//     votar(idade);

//     return 0;
// }



//Número 3
// #include <stdio.h>

// int anos(int a, int m, int d){
//     return a * 365 + m * 30 + d;
// }

// void seta(){
//     printf("---------------------------------------\n");
// }

// int main(){

//     int ano, mes, dia;

//     printf("Anos: ");
//     scanf("%d", &ano);
//     seta();
//     printf("Mes: ");
//     scanf("%d", &mes);
//     seta();
//     printf("Dias: ");
//     scanf("%d", &dia);
//     seta();
//     printf("Voce possui %d dias vividos\n", anos(ano, mes, dia));
//     seta();
// }



//Número 1

// #include<stdio.h>

// float multiplicar(float a, float b);

// int main(){
//     float n1 = 0, n2 = 0, total = 0;
//     printf("Digite um numero: ");
//     scanf("%f", &n1);
//     printf("Digite um numero: ");
//     scanf("%f", &n2);
//     total = multiplicar(n1, n2);
//     printf("Total: %.2f", total);
//     return 0;
// }

// float multiplicar(float a, float b){
//     float t = a * b;
//     return t;
// }



//Número 2

// #include <stdio.h>

// void votar(int x){
//     if(x >= 18 && x <= 70){
//         printf("Voto obrigatorio");
//     } else{
//         printf("Voto nao obrigatorio");
//     }
// }

// int main(){

//     int idade = 0;

//     printf("Digite sua idade: ");
//     scanf("%d", &idade);
//     votar(idade);

//     return 0;
// }




//Número 3

// #include <stdio.h>

// int dias(int a, int m, int d);

// int main(){

//     int ano, mes, dia, calc;
//     printf("Anos de vida: ");
//     scanf("%d", &ano);
//     printf("Meses de vida: ");
//     scanf("%d", &mes);
//     printf("Dias de vida: ");
//     scanf("%d", &dia);
//     calc = dias(ano, mes, dia);
//     printf("%d", calc);

//     return 0;
// }

// int dias(int a, int m, int d){
//     return a*365+m*30+d;
// }



// #include <stdio.h>

// float total(char s, char t);


// int main(){

//     char tamanho, sexo;
//     float tot = 0;

//     printf("Digite seu sexo: [ M / F ]: ");
//     scanf(" %c", &sexo);
//     printf("Digite o tamanho da roupa: [ P / M / G]: ");
//     scanf(" %c", &tamanho);
//     tot = total(sexo, tamanho);
//     if(tot >= 0){
//         printf("Valor total: %.2f", tot);
//     } else{
//         printf("Valor invalido.");
//     }
    
//     return 0;
// }

// float total(char s, char t){
//     switch(s){
//         case 'M':
//         case 'm':
//             switch(t){
//                 case 'p':
//                 case 'P':
//                     return 22.25;

//                 case 'm':
//                 case 'M':
//                     return 27.15;

//                 case 'g':
//                 case 'G':
//                     return 40;
                
//                 default:
//                     return -1;
//             }
//         case 'F':
//         case 'f':
//             switch(t){
//                 case 'p':
//                 case 'P':
//                     return 28.75;

//                 case 'm':
//                 case 'M':
//                     return 39.99;

//                 case 'g':
//                 case 'G':
//                     return 51;

//                 default:
//                     return -1;
//             }
//         default:
//             return -1;
//     }
// }





// 4 - Crie uma função que conta quantas vezes um valor específico digitado pelo usuário aparece em um array com 4 inteiros também preenchido pelo usuário. A função deve atualizar uma variável com a contagem e deve ser chamada passando o array, o valor específico digitado e o valor da contagem retornado por referência.

// 5 - Crie uma função que calcula a média de dois números inteiros e atualiza o valor de uma variável com a média. A função deve ser chamada passando a variável média por referência.

// 6 - Crie uma função que atualiza o valor de dois inteiros: o primeiro deve ser multiplicado por 2 e o segundo deve ser decrementado em 1. A função deve ser chamada passando os endereços das variáveis.


// 2 - Crie uma função que recebe um número inteiro e retorne esse número incrementado em 5. A função deve ser chamada passando um número por valor.

#include <stdio.h>

// int acrementado(int x);

// int main(){
//     int num = 0;
//     printf("Digite um numero: ");
//     scanf("%d", &num);
//     printf("%d", acrementado(num));
// }

// int acrementado(int x){
//     return x + 5;
// }

// 3 - Crie uma função que conta quantas vezes um valor ímpar ocorre em um array de 4 inteiros digitados pelo usuário. A função deve retornar a quantidade de ímpares.

