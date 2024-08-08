#include <stdio.h>

int main(){

  // int i=1;
  // int u=1;
  // int l=1;
  // int m=1;

  // printf("NUM: ");
  // scanf("%d", &num);

  // while(num != 10){
  //   printf("%d\n", num);
  //   printf("NUM: ");
  //   scanf("%d", &num);
  // }
  // printf("Acertou!");

  
//   do{
//     printf("numero? ");
//     scanf("%d", &num);
//     printf("%d\n", num);
//   }
//   while(num<10);
  

  

  // while(i<=100){
  //   printf("%d\n", i);
  //   i++;
  // }
  

  // while(u<=100){
  //   printf("%d\n", u);
  //   u+=3;
  // }


  // while(l<=100){
  //   if(l%2==0){
  //     printf("%d\n", l);
  //   }
  //   l++;
  // }

  // while(m<=100){
  //   if(m%3==0){
  //     printf("%d\n", m);
  //   }
  //   m++;
  // }


  // int numero = 0;
  // int maior = 0;
  // int menor = 0;
  
  // do{
  //   printf("Digite um número: ");
  //   scanf("%d", &numero);

  //   if(numero!=0){
  //     if(numero > maior){
  //     maior=numero;
  //     }
  //     if(numero<menor || menor==0){
  //     menor=numero;
  //     }
  //   }
  // }while(numero!=0);
  // printf("\nO maior é %d\n", maior);
  // printf("O menor é %d", menor);

  char continuar;
  int idade=0, maior=0, menor=0, quantidadeMulher=0;
  char sexo;
  float salario=0, mediaSalario=0, quantidade;
  
  do{
    printf("Sua idade: ");
    scanf("%d", &idade);

    printf("Seu sexo(m/f");
    scanf(" %c", &sexo);

    printf("Seu salário: ");
    scanf("%f", &salario);
    mediaSalario += salario;
    
    printf("Deseja continuar (s/n)");
    scanf(" %c", &continuar);

    quantidade++;
  }while(continuar == 's');
  
  
  return 0;
  }