// QUESTAO 1

// #include <stdio.h>

// int main(void) {
//   float alturas[5], soma = 0, media = 0;
//   int qtdAcima = 0;

//   for(int i = 0; i < 5; i++){
//     printf("Digite sua altura: ");
//     scanf("%f", &alturas[i]);
//     soma+=alturas[i];
//     if(alturas[i] > 1.75){
//       qtdAcima++;
//     }
//   }
//   media = soma / 5;
//   printf("A soma das idades e: %.2f\nA media das alturas e: %.2f\nA quantidade de pessoas que possuem altura acima de 1.75 e: %d", soma, media, qtdAcima);
   
// }








// QUESTAO 2

// #include <stdio.h>

// int main(){

//   int idades[4], qtdMaisMenos = 0, maisVelha = 0, menorIdade = 0;
//   float pesos[4], menorPeso = 0, pesoMenorIdade = 0;

//   for(int i = 0; i < 4; i++){
//     printf("Digite sua idade: ");
//     scanf("%d", &idades[i]);
//     printf("Digite seu peso: ");
//     scanf("%f", &pesos[i]);
//     if(idades[i] > 20 && pesos[i] < 70){
//       qtdMaisMenos++;
//     }
//     if(idades[i] > maisVelha){
//       maisVelha = idades[i];
//     }
//     if(pesos[i] < menorPeso || i == 0){
//       menorPeso = pesos[i];
//     }
//     if(idades[i] < menorIdade || i == 0){
//       menorIdade = idades[i];
//       pesoMenorIdade = pesos[i];
//     }
//   }
//   printf("Quantidade de pessoas que tem mais de 20 anos: %d\nIdade da pessoa mais velha: %d\nMenor peso: %.2f\nPeso da pessoa mais nova: %.2f", qtdMaisMenos, maisVelha, menorPeso, pesoMenorIdade);

//   return 0;
// }











QUESTAO 3
  
#include <stdio.h>

int main(){

  float salarios[2][3], soma = 0, media = 0;
  int qtdEntre = 0, qtdAbaixoMedia = 0;

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      printf("Digite seu salario: ");
      scanf("%f", &salarios[i][j]);
      soma += salarios[i][j];
      if(salarios[i][j] >= 1250 && salarios[i][j] <= 1800){
        qtdEntre ++;
      }
    }
  }
  media = soma/6;

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      if(salarios[i][j] < media){
        qtdAbaixoMedia++;
      }
    }
  }

  printf("Qtd de salarios entre 1250 e 1800: %d\nMedia: %.2f\nQuantidade de salarios abaixo da media: %d", qtdEntre, media, qtdAbaixoMedia);

  
  return 0;
}