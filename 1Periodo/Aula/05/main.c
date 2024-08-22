#include <stdio.h>
#include <time.h>

int main(void) {

  int num1=0, num2=0, operacao=0, valor_operacao=0;
  char pergunta;

  do{
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("\n 1:Soma\n 2:Subtracao\n 3:Divisao\n 4:Multiplicacao\nDigite a operação: ");
    scanf("%d", &operacao);

    switch(operacao){
      case 1:
      valor_operacao=num1+num2;
      printf("%d+%d=%d\n", num1, num2, valor_operacao);
      break;
      
      case 2:
      valor_operacao=num1-num2;
      printf("%d-%d=%d\n", num1, num2, valor_operacao);
      break;

      case 3:
      if(num2==0){
        do{
          printf("Digite outro numero: ");
          scanf("%d", &num2);
        }while(num2==0); 
        valor_operacao=num1/num2;
      }
      else{
        valor_operacao=num1/num2;
      }
      printf("%d/%d=%d\n", num1, num2, valor_operacao);
      break;

      case 4:
      valor_operacao=num1*num2;
      printf("%d*%d=%d\n", num1, num2, valor_operacao);
      break;

      default: 
      printf("Operacao invalida.");
    }
    printf("Deseja continuar?(s/n)");
    scanf(" %c", &pergunta);
  }while(pergunta=='s');
  printf("Encerrado.");
  
  return 0;
}



// int main(){
// char  continuar;
// float precoCompra=0, precoVenda=0, lucro=0, porcentagem=0;
// int contagem_10=0, contagem_15=0, contagem_20=0;

//   do{
   
//     printf("Preco de compra: ");
//     scanf("%f", &precoCompra);
//     printf("Preco de venda: ");
//     scanf("%f", &precoVenda);
    
    
//     lucro=precoVenda-precoCompra;
//     porcentagem=lucro*100/precoCompra;
//     printf("Lucro de %.0f%%\n", porcentagem);
//     if(porcentagem<10 && porcentagem >=0 ){
//       contagem_10++;
//     }
//     if(porcentagem >= 10 && porcentagem < 20){
//       contagem_15++;
//     }
//     if(porcentagem >=20){
//       contagem_20++;
//     }
//     if(porcentagem<0){
//       printf("Sem lucro!\n");
//     }
//     sleep(1);
//     printf("Deseja continuar? (s/n): ");
//     scanf(" %c", &continuar);
//   }while(continuar=='s');
  
//   printf("Lucros menores que 10%%: %d\n", contagem_10);
//   printf("Lucros entre 10%% e 20%%: %d\n", contagem_15);
//   printf("Lucros maiores que 20%%: %d\n", contagem_20);
  
  
//   return 0;
// }


  // int main (){

    

  //   return 0;
  // }