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
#include <stdio.h>

int anos(int a, int m, int d){
    return a * 365 + m * 30 + d;
}

int main(){

    int ano, mes, dia;

    printf("Anos: ");
    scanf("%d", &ano);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Dias: ");
    scanf("%d", &dia);
    printf("Voce possui %d dias vividos", anos(ano, mes, dia));
}
