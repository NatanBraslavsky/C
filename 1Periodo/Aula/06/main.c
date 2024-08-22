#include <stdio.h>

int main(void) {

  
// for(int i =1; i<101; i++){
  
//   if(i % 10==0){
//     printf("%d e Multiplo de 10\n", i);
//   }
//   else{
//     printf("%d\n", i);
//   }
// }

  // float  altura=0,maior=0, menor=0, media=0, soma=0;
  // int homens=0, mulheres=0;
  // char sexo;

  // for(int i=0; i<5; i++){
  //   printf("Digite sua altura: ");
  //   scanf("%f", &altura);

  //   printf("Digite seu sexo [ m / f]");
  //   scanf(" %c", &sexo);

  //   if(altura > maior){
  //     maior = altura;
  //   }
  //   if(altura < menor || menor==0){
  //     menor=altura;
  //   }
  //   if(sexo=='f'){
  //     soma+=altura;
  //     mulheres++;
  //   }
  //   if(sexo=='h'){
  //     homens++;
  //   }
  // }
  // printf("Maior = %.2f, Menor = %.2f", maior, menor);
  // media=soma/mulheres;
  // printf("\nMedia de altura das mulheres %.2f", media);
  // printf("\nNumero de homens %d", homens);

  char sexo, resposta;
  int sim=0, nao=0;
  float quantMulherSim=0, percentMulherSim=0, quantHomemNao=0, percentHomemNao=0;

  for(int i=0; i<10; i++){
    printf("Digite seu sexo [ m / f ]");
    scanf(" %c", &sexo);

    printf("Resposta : [ s / n ]:");
    scanf(" %c", &resposta);
    if(resposta == 's'){
      sim++;
    }
    else if(resposta == 'n'){
      nao++;
    }
    else{
      printf("Resposta invalida");
    }
    if(sexo == 'f' && resposta == 's'){
      quantMulherSim++;
    }
    if(sexo == 'm' && resposta == 'n'){
      quantHomemNao++;
    }
  }
  
  percentMulherSim = quantMulherSim * 100 / 10;
  percentHomemNao = quantHomemNao * 100 / 10;
  printf("sim %d", sim);
  printf("\nnao %d", nao);
  printf("\nPorcentagem de pessoas do sexo feminino que responderam sim %.2f %%", percentMulherSim);
  printf("\nPorcentagem de pessoas do sexo masculino que responderam nao %.2f %%", percentHomemNao);
  
  return 0;
}