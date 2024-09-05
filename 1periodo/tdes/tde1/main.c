#include <stdio.h>

//     int main(void){

//     int a = 0;
//     int b = 0;
//     int a2 = 0;

//     printf("Digite um valor: ");
//     scanf("%d", &a);
//     printf("Digite outro valor: ");
//     scanf("%d", &b);

//     a2 = a;
//     a = b;
//     b = a2;

//     printf("Primeiro Valor = %d, Segundo Valor = %d", a, b);

//     return 0;
//     }




//     int main (void){

//         int num = 0;
//         int ant = 0;
//         int suc = 0;

//         printf("Digite um numero: ");
//         scanf("%d", &num);

//         ant = num - 1;
//         suc = num + 1;

//         printf("Antecessor = %d\n", ant);
//         printf("Sucessor = %d", suc);

//         return 0;
//     }





//     int main(void){

//         float conta = 0;
//         float garcom = 0;

//         printf("Valor da conta: ");
//         scanf("%f", &conta);

//         garcom = 0.1 * conta + conta;
//         printf("Valor adicionado os 10%%: R$%.2f", garcom);

//         return 0;
//     }





//     int main (void){

//         float raio = 0;

//         printf("Valor do Raio: ");
//         scanf("%f", &raio);

//         float perimetro = 2 * 3.14 *raio;
//         float area = 3.14 * raio * raio;

//         printf("Perimetro: %.2f\n", perimetro);
//         printf("Area: %.2f", area);

//         return 0;
//     }





//     int main (){

//         float cels, fahr;

//         printf("Graus em Celsius: ");
//         scanf("%f", &cels);

//         fahr = (9*cels+160)/5;

//         printf("Temperatura em Fahrenheit %.2f", fahr);

//         return 0;
//     }





//     int main (){

//         int consumidor;
//         float precoKw, quantidadeKw, pagamento;

//         printf("Codigo do consumidor: ");
//         scanf("%d", &consumidor);
//         printf("Preco Kw: ");
//         scanf("%f", &precoKw);
//         printf("Quantidade consumida de Kw: ");
//         scanf("%f", &quantidadeKw);

//         pagamento = precoKw * quantidadeKw;
//         if(pagamento < 21.23){
//             pagamento = 21.23;
//         }
//         printf("Codigo do consumidor: %d\n", consumidor);
//         printf("Preco a ser pago: %.2f", pagamento);

//         return 0;
//     }





//     int main(){

//         float n1, n2;

//         printf("Primeiro valor: ");
//         scanf("%f", &n1);
//         printf("Segundo valor: ");
//         scanf("%f", &n2);

//         if(n2 > n1){
//             printf("%.2f > %.2f", n2, n1);
//         }
//         else{
//             if(n1 > n2){
//             printf("%.2f > %.2f", n1, n2);
//             }
//             else{
//             printf("%.2f = %.2f", n1, n2);
//             }  
//         }

//         return 0;
//     }





//     int main(){

//         float nota1, nota2, media;

//         printf("Nota AV1: ");
//         scanf("%f", &nota1);
//         printf("Nota AV2: ");
//         scanf("%f", &nota2);

//         media = (nota1 + nota2) / 2;
//         printf("Media: %.2f\n", media);

//         if(media>=6){
//             printf("Aprovado.");
//         }
//         else{
//             if(media >=5 && media < 6){
//             printf("Necessario a realizacao da AV3. ");
//             }
//             else{
//                 printf("Reprovado. ");
//             }
//         }

//         return 0;
//     }





//     int main(){

//         float n1, n2, n3;

//         printf("Numero 1: ");
//         scanf("%f", &n1);
//         printf("Numero 2: ");
//         scanf("%f", &n2);
//         printf("Numero 3: ");
//         scanf("%f", &n3);

//         printf("Ordem descrescente: ");

//         if(n1 > n2 && n2 > n3){
//         printf("%.2f > %.2f > %.2f.", n1, n2, n3);
//         }
//         else{
//             if(n1 > n3 && n3 > n2){
//             printf("%.2f > %.2f > %.2f.", n1, n3, n2);
//             }
//             else{
//                 if(n2 > n1 && n1 > n3){
//                 printf("%.2f > %.2f > %.2f.", n2, n1, n3);
//                 }
//                 else{
//                     if(n2 > n3 && n3 > n1){
//                     printf("%.2f > %.2f > %.2f.", n2, n3, n1);
//                     }
//                     else{
//                         if(n3 > n2 && n2 > n1){
//                         printf("%.2f > %.2f > %.2f.", n3, n2, n1);
//                         }
//                         else{
//                             if(n3 > n1 && n1 > n2){
//                             printf("%.2f > %.2f > %.2f.", n3, n1, n2);
//                             }
//                         }
//                     }
//                 }
//             }
//         }

//     return 0;
// }






//     int main (){

//         float n1, n2;
//         char operador;

//         printf("Primeiro valor: ");
//         scanf("%f", &n1);
//         printf("Segundo numero: ");
//         scanf("%f", &n2);
//         printf("Soma         ( + )\nSubtracao    ( - )\nDivisao      ( / )\nMultiplicacao( + )\nDigite a operacao: ");
//         scanf(" %c", &operador);

//         switch (operador){
//             case '+':
//             printf("%.1f + %.1f = %.1f", n1, n2, n1+n2);
//             break;

//             case '-':
//             printf("%.1f - %.1f = %.1f", n1, n2, n1-n2);
//             break;

//             case '*':
//             printf("%.1f * %.1f = %.1f", n1, n2, n1*n2);
//             break;

//             case '/':
//             if(n2 == 0){
//                 printf("Operacao invalida. ");
//                 }
//             else{
//                 printf("%.1f / %.1f = %.1f", n1, n2, n1/n2);
//             }
//           }
//           return 0;
//         }





//     int main(){

//         int conta, metro;
//         char tipo;
//         float residencial, comercial, industrial;

//         printf("Conta do cliente: ");
//         scanf("%d", &conta);
//         printf("Tipo de cliente\nResidencial ( R )\nComercial   ( C )\nIndustrial  ( I )\n Selecione um tipo: ");
//         scanf(" %c", &tipo);
//         printf("Metro cubico gasto: ");
//         scanf("%d", &metro);

//         residencial = 5 + 0.05*metro;
//         if(metro >= 80){
//             comercial = 500 + 0.25*metro;
//         }
//         else{
//             comercial = 0.25*metro;
//         }
//         if(metro >= 100){
//             industrial = 800 + 0.04*metro;
//         }
//         else{
//             industrial = 0.04*metro;
//         }

//         printf("Conta do cliente: %d\n", conta);

//         switch (tipo){
//             case 'r':
//             printf("Valor a ser pago: %.2f", residencial);
//             break;

//             case 'c':
//             printf("Valor a ser pago: %.2f", comercial);
//             break;

//             case 'i':
//             printf("Valor a ser pago: %.2f", industrial);
//             break;
//             }


//         return 0;
//     }






//     int main() {

//         float precoNormal, precoFinal;
//         int diaSemana;
//         char categoria;


//         printf("Digite o preço normal da fita em R$: ");
//         scanf("%f", &precoNormal);


//         printf("Digite o dia da semana (1 a 7): ");
//         scanf("%d", &diaSemana);


//         printf("Digite a categoria do filme (C para comum, L para lançamento): ");
//         scanf(" %c", &categoria);

//         switch (diaSemana) {
//             case 2: 
//             case 3: 
//             case 5: 
//                 precoFinal = precoNormal * 0.6; 
//                 break;
//             case 4: 
//             case 6: 
//             case 7: 
//             case 1: 
//                 precoFinal = precoNormal; 
//                 break;
//             default:
//                 printf("Dia da semana inválido!\n");
//             }

//         if (categoria == 'L') {
//             precoFinal *= 1.15;
//         }

//         printf("O preço final a ser pago é de R$ %.2f\n", precoFinal);

//         return 0;
//     }






//     int main (){

//         int i;
//         float a, b, c, maior, menor, medio;

//         printf("Escolha um numero de 1 a 3: ");
//         scanf("%d", &i);

//         printf("Escolha qualquer valor: ");
//         scanf("%f", &a);

//         printf("Escolha qualquer outro valor: ");
//         scanf("%f", &b);

//         printf("Escolha qualquer outro valor: ");
//         scanf("%f", &c);

//         if(a>b && b>c){
//             maior=a;
//             medio=b;
//             menor=c;
//         }
//         else{
//             if(a>c && c>b){
//                 maior=a;
//                 menor=b;
//                 medio=c;
//             }
//             else{
//                 if(b>a && a>c){
//                     maior=b;
//                     medio=a;
//                     menor=c;
//                 }
//                 else{
//                     if(b>c && c>a){
//                         maior=b;
//                         medio=c;
//                         menor=a;
//                     }
//                     else{
//                         if(c>a && a>b){
//                             maior=c;
//                             medio=a;
//                             menor=b;
//                         }
//                         else{
//                             if(c>b && b>a){
//                                 maior=c;
//                                 medio=b;
//                                 menor=a;
//                             }
//                         }
//                     }
//                 }
//             }
//         }

//         switch(i){
//             case 2:
//             printf("%.1f, %.1f, %.1f", maior, medio, menor);
//             break;

//             case 1:
//             printf("%.1f, %.1f, %.1f", menor, medio, maior);
//             break;

//             case 3:
//             printf("%.1f, %.1f, %.1f", menor, maior, medio);
//         }

//         return 0;
//     }






//     int main(){

//         int numero=0, soma=0;

//         do{
//             printf("Numero: ");
//             scanf("%d", &numero);
//             soma+=numero;
//         }
//         while (numero!=0);
//         printf("Soma: %d", soma);

//         return 0;
//     }







//     int main(){

//         float numero=0, soma=0, quantidadeNumero=0;

//         do{

//             printf("Numero: ");
//             scanf("%f", &numero);
//             soma+=numero;
//             if(numero!=0){
//             quantidadeNumero++;
//             }

//         }while(numero!=0);

//         printf("%.0f numeros apresentados\n", quantidadeNumero);
//         printf("media = %.2f", soma/quantidadeNumero);

//         return 0;
//     }




//     int main(){


//         float idade=0, somaIdade=0, quantidadeIdade=0, mediaIdade=0;

//         do{
//             printf("Idade: ");
//             scanf("%f", &idade);
//             if(idade>=18){
//                 somaIdade+=idade;
//                 quantidadeIdade++;
//             }
//         }while(idade!=0);
//         printf("Soma das idades > 18 anos: %.0f\n", somaIdade);
//         printf("Media das idades > 18 anos: %.0f", somaIdade/quantidadeIdade);
//         return 0;
//     }




//     int main(){

//         float preco=0, quantidadeConsumido=0, totalPagar=0, somaConsumo=0, quantidadeConsumidor=0, maiorConsumo=0, menorConsumo=0;
//         int numeroConsumidor=0;

//         do{
//             printf("Numero do consumidor: ");
//             scanf("%d", &numeroConsumidor);

//             if(numeroConsumidor!=0){
//             printf("Preco do kWh consumido: ");
//             scanf("%f", &preco);

//             printf("Quantidade de kWh consumido: ");
//             scanf("%f", &quantidadeConsumido);
//             if(quantidadeConsumido>maiorConsumo){
//                 maiorConsumo=quantidadeConsumido;
//             }
//             if(quantidadeConsumido<menorConsumo || menorConsumo==0){
//                 menorConsumo=quantidadeConsumido;
//             }

//             somaConsumo+=quantidadeConsumido;
//             quantidadeConsumidor++;
//             totalPagar = quantidadeConsumido*preco;
//             printf("Total a pagar: %.2f\n", totalPagar);  
//             }
//         }
//         while(numeroConsumidor!=0);
//             printf("Maior consumo: %.1f\n", maiorConsumo);
//             printf("Menor consumo: %.1f\n", menorConsumo);
//             printf("Media geral de cunsumo: %.1f\n", somaConsumo/quantidadeConsumidor);
//         return 0;
//     }





    int main(){

        int numero=0, um_a_dez=1, um_a=0, calculo=0;
        printf("Digite um numero: ");
        scanf("%d", &numero);
        printf("------TABUADA------\n");

        do{ 
            calculo=numero*um_a_dez;
            um_a_dez++;
            um_a++;
            printf("%d * %d = %d\n", numero, um_a, calculo);
        }while(um_a_dez<11);

        return 0;
    }





    // int main(){

    //     int opcao=0;

    //     do{
    //         printf("Selecione 0 ou 1: ");
    //         scanf("%d", &opcao);

    //         switch(opcao){
    //             case 0:
    //             printf("Opcao 0\n");
    //             break;

    //             case 1:
    //             printf("Opcao 1\n");
    //             break;

    //             default:
    //             printf("Fim da execucao. ");
    //         }

    //     }while(opcao==0 || opcao==1);      

    //     return 0;
    // }
