#include <stdio.h>

// int main(){

//     int matriz[3][3];
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             matriz[i][j] = i+j*2;
//             if(i + j >= 3){
//                 printf("[%d]", matriz[i][j]);
//             } else{
//                 printf("[*]");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }



// int calculadora(int x1, int x2, int op);

// int main(){

//     int v1, v2, operador, resposta;
//     do{
//         printf("\nDigite um valor: ");
//         scanf("%d", &v1);
//         printf("Digite um valor: ");
//         scanf("%d", &v2);
//         printf("Digite o operador\n1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\nResposta: ");
//         scanf("%d", &operador);
//         resposta = calculadora(v1, v2, operador);
//         printf("Resposta: %d", resposta);
//     }while(operador != 0);

//     return 0;
// }

// int calculadora(int x1, int x2, int op){
//     int res = 0;
//     switch(op){
//         case 1:
//         res = x1+x2;
//         break;

//         case 2:
//         res = x1-x2;
//         break;

//         case 3:
//         res = x1*x2;
//         break;

//         case 4:
//         res = x1 / x2;
//         break;

//         default:
//         printf("Valor ivalido. ");
//     }
//     return res;
// }





// void tabua(int num);

// int main(){
//     int num;
//     printf("Digite um numero: ");
//     scanf("%d", &num);
//     tabua(num);
//     return 0;
// }

// void tabua(int num){
//     int i = 1;
//     do{
//         printf("7 * %d = %d\n", i, i*7);
//         i++;
//     } while (i * 7 < num);
// }



// int maiorTres(int n1, int n2, int n3);

// int main(){
//     int n1, n2, n3;
//     printf("Digite um numero: ");
//     scanf("%d", &n1);
//     printf("Digite um numero: ");
//     scanf("%d", &n2);
//     printf("Digite um numero: ");
//     scanf("%d", &n3);
//     printf("O maior: %d", maiorTres(n1,n2,n3));

//     return 0;
// }

// int maiorTres(int n1, int n2, int n3){
//     int maior = 0;
//     if(n1 >= n2 && n1 >= n3){
//         maior = n1;
//     }
//     else if(n2 >= n1 && n2 >= n3){
//         maior = n2;
//     } else if(n3 >= n1 && n3 >= n2){
//         maior = n3;
//     }
//     return maior;
// }



// int salarioFunc(char profissao, float salario){
//     float salFinal = 0;
//     switch(profissao){
//         case 's':
//         salFinal = salario + salario * 5 / 100;
//         break;

//         case 'p':
//         salFinal = salario + salario * 10 / 100;
//         break;

//         case 'j':
//         salFinal = salario + salario * 15 / 100;
//         break;
//     }
//     return salFinal;
// }

// int main(){

//     float salario, salarioFinal = 0;
//     char profissao;
//     printf("Digite seu salario: R$");
//     scanf("%f", &salario);
//     printf("Digite seu cargo: ");
//     scanf(" %c", &profissao);
//     salarioFinal = salarioFunc(profissao, salario);
//     printf("Salario final: R$%.2f", salarioFinal);

//     return 0;
// }




int soma(int x1, int x2, int x3){
    return x1+x2+x3;
}
int media(int x1, int x2, int x3){
    int som = 0;
    int med = 0;
    som = soma(x1, x2, x3);
    med = som / 3;
    return med;
}
int main(){
    int num1, num2, num3;
    int med = 0;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    printf("Digite um numero: ");
    scanf("%d", &num3);
    med = media(num1, num2, num3);
    printf("Media: %d", med);
    return 0;
}