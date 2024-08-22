#include <stdio.h>

// int main(void) {
//  float media = 5;
//   if (media>=5){
//     printf("Passou!\n");
    
//   }
//   else{
//     printf("Reprovou!\n");
//   }

// // Ternário
//   media>=6? printf("Passou!\n"): printf("Reprovou!\n");

//   media>=6? printf("Passou!"): media>=5? printf("Recuperação!"): printf("Reprovou!");
//   return 0;
// }



// int main(void){
//  char categoria;
//   printf("Digite a categoria: ");
//     scanf(" %c", &categoria);

// switch (categoria){
//   case 'a':
//     printf("5 a 7 anos."); 
//     break;
//   case 'b':
//     printf("8 a 11 anos.");
//     break;
//   case 'c':
//     printf("12 a 13 anos.");
//     break;
//   case 'd':
//     printf("14 a 17 anos.");
//     break;
//   case 'e':
//     printf("Maior de 18 anos.");
//   }
// }
    
int main (void){

float num1 = 0;
float num2 = 0;
char operacao;


printf("Digite um número: ");
scanf("%f", &num1);
printf("Digite outro número: ");
scanf("%f", &num2);
printf("\nAdição       ( + )\nSubtração    ( - )\nMultiplicação( * )\nDivisão      ( / ) \nDigite a operação: ");
scanf(" %c", &operacao);

 switch(operacao){
   case '+':
    printf("%.2f + %f = %.2f", num1, num2, num1 + num2);
    break;
   
   case '-':
    printf("%.2f - %f = %.2f", num1, num2, num1 - num2);
    break;
   
   case '*':
    printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    break;
   
   case '/': 
    if(num2==0){
      printf("Não se pode fazer divisão por 0.");
    }
    else{
      printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
    }
    break;
    default:
    printf("Inválido");
   return 0;
   }
  }
