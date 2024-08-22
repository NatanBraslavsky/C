// #include <stdio.h>

// int main(void) {

//   // programa que printa a altura da pessoa mais velha entre 4 pessoas

//     float altura[4], alturaMaisVelha=0;
//     int idade[4], maisVelha=0;

//     for(int i=0; i<4; i++){
//       printf("Digite sua altura: ");
//       scanf("%f", &altura[i]);
//       printf("Digite sua idade: ");
//       scanf("%d", &idade[i]);
//       if(idade[i] > maisVelha){
//         maisVelha=idade[i];
//         alturaMaisVelha = altura[i];
//       }
//     }
//     printf("Altura da pessoa mais velha %.2f", alturaMaisVelha);
    
//   return 0;
// }







// Preencha um vetor com cinco alturas e exiba-os na tela na ordem invertida.
// #include <stdio.h>

// int main(){

//   float altura[5];

//   for(int i=0; i<5; i++){
//     printf("Digite sua altura: ");
//     scanf("%f", &altura[i]);
//   }
//   for(int i=4; i>=0; i--){
//     printf("%.2f\n", altura[i]);
//   }

//   return 0;
// }







// Escreva um algoritmo para ler cinco valores inteiros, calcular a sua média,
// e escrever na tela os números que são superiores à média.
// #include <stdio.h>

// int main(){

//   float valor[5], soma=0, media=0;

//   for(int i=0; i<5; i++){
//     printf("Digite um valor: ");
//     scanf("%f", &valor[i]);
//     soma+=valor[i];
//   }
//   media = soma/5;
//   printf("A media é %.2f\n", media);
//   for(int i=0; i<5; i++){
//     if(valor[i]>media){
//       printf("%.2f\n", valor[i]);
//     }
//   }
//   return 0;
// }






// Escreva um algoritmo para ler a quantidade de horas/aula de quatro
// professores e o nome cada um. Mostrar na tela qual o maior salário
// recebido entre os quatro e o nome do professor.
// salário = horas/aula * 30
#include <stdio.h>

int main(){

  float horas=0, salario[4], maiorSalario=0;
  char nome[4], nomeMaior;

  for(int i=0; i<4; i++){
    printf("Quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Inicial do seu nome: ");
    scanf(" %c", &nome[i]);
    salario[i]=horas*30;
    if(salario[i] > maiorSalario){
      maiorSalario = salario[i];
      nomeMaior=nome[i];
    }
  }
  printf("Maior salario: %.2f\n", maiorSalario);
  printf("Inicial da pessoa com maior salario: %c", nomeMaior);
  
  return 0;
}






// Construa um algoritmo que leia 10 valores inteiros e positivos e:

// • Encontre o maior valor
// • Encontre o menor valor
// • Calcule a média dos números lidos

// #include <stdio.h>

// int main(){

//   int valor[10], maiorValor=0, menorValor=0, soma=0;
//   float media=0;
  
//   for(int i=0; i<10; i++){
//     printf("Digite um valor: ");
//     scanf("%d", &valor[i]);
//     if(valor[i] > maiorValor){
//       maiorValor=valor[i];
//     }
//     if(valor[i] < menorValor || menorValor == 0){
//       menorValor=valor[i];
//     }
//     soma+=valor[i];
//   }
//   media= soma/10;
//   printf("Maior valor: %d", maiorValor);
//   printf("\nMenor valor: %d", menorValor);
//   printf("\nMedia dos valores: %.2f", media);
//   return 0;
// }





// Escreva um algoritmo para ler a nota de 10 alunos, calcular a média geral
// da turma e escrever quantos alunos tiveram a nota acima da média
// calculada.

// #include <stdio.h>

// int main(){

//   float nota[10], media=0, soma=0;
//   int qtdAcimaMedia=0;

//   for(int i=0; i<10; i++){
//     printf("Nota %d: ", i+1);
//     scanf("%f", &nota[i]);
//     soma+=nota[i];
//   }
//   media=soma/10;
//   for(int i=0; i<10; i++){
//     if(nota[i] > media){
//       qtdAcimaMedia++;
//     }
//   }
//   printf("Media: %.2f", media);
//   printf("\nQuantidade de alunos acima da media: %d", qtdAcimaMedia);
  
//   return 0;
// }