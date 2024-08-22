
// QUEST 1
// #include <stdio.h>

// int main(){

//     int idades = 0, qtdMaiorIdadeOitenta = 0, maiorIdade = 0;
//     float alturas = 0, somaMenorDezoito = 0, qtdMenorDezoito = 0, mediaMenorDezoito = 0, alturaMaiorIdade = 0;

//     for(int i = 0; i < 4; i++){
//         printf("Digite sua idade: ");
//         scanf("%d", &idades);
//         printf("Digite sua altura: ");
//         scanf("%f", &alturas);
//         if(idades > 18 && alturas > 1.80){
//             qtdMaiorIdadeOitenta++;
//         }
//         if(idades < 18){
//             somaMenorDezoito += alturas;
//             qtdMenorDezoito++;
//         }
//         if(idades > maiorIdade){
//             maiorIdade = idades;
//             alturaMaiorIdade = alturas;
//         }
//     }
//     mediaMenorDezoito = somaMenorDezoito/qtdMenorDezoito;
//     printf("Numero de pessoas que possuem 18 anos e mais de 1.80: %d\n", qtdMaiorIdadeOitenta);
//     printf("Media de altura das pessoas com menos de 18 anos: %.2f\n", mediaMenorDezoito);
//     printf("Maior idade: %d\n", maiorIdade);
//     printf("Altura da pessoa com a maior idade: %.2f", alturaMaiorIdade);


//     return 0;
// }




// QUEST 2
// #include <stdio.h>
// int main (){

//     float pesos[6], somaPeso = 0, mediaPeso = 0;
//     int qtdAbaixo = 0;

//     for(int i = 0; i < 6; i++){
//         printf("Digite seu peso: ");
//         scanf("%f", &pesos[i]);
//         somaPeso += pesos[i];
//     }
//     mediaPeso = somaPeso/6;
//     for(int i = 0; i < 6; i++){
//         if(pesos[i] < (mediaPeso / 2)){
//             qtdAbaixo++;
//             printf("Peso abaixo da metade da media: %.2f\n", pesos[i]);
//         }
//     }
//     printf("Quantidade de pessoas que possuem o peso abaixo da metade da media: %d", qtdAbaixo);
// return 0;
// }




// QUEST 4
// #include <stdio.h>

// int main (){

//     int num[3][2];

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 2; j++){
//             printf("Digite um numero: ");
//             scanf("%d", &num[i][j]);
//         }
//     }
//     printf("Numeros pares da matriz: \n");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 2; j++){
//             if(num[i][j] % 2 == 0){
//                 printf("%d ", num[i][j]);
//             }
//         }
//     }

//     return 0;
// }





// QUEST 4
// #include<stdio.h>
// #include<string.h>

// int main(){

//     char estados[5][30], meuEstado[5][30];
//     int qtdCaracter[5], comp = 0;

//     for(int i = 0; i < 5; i++){
//         printf("Digite seu estado: ");
//         scanf("%s", estados[i]);
//         qtdCaracter[i] = strlen(estados[i]);
//         strcpy(meuEstado[i], estados[i]);
//         comp = strcmp(estados[i], "acre");
//         if(qtdCaracter[i] > 5){
//             strcat(estados[i], "-grande");
//         } else{
//             strcat(estados[i], "-pequeno");
//         }
//         printf("Quantidade de caracteres: %d\n", qtdCaracter[i]);
//         printf("Variavel copiada: %s\n", meuEstado[i]);
//         printf("Estado concatenado: %s\n", estados[i]);
//         if(comp == 0){
//             printf("Voce e um dinossauro, nasceu no acre!\n");
//         } else {
//             printf("Voce e normal, nao nasceu no acre!\n");
//         }

//     }

//     return 0;
// }








// QUEST 1
// #include <stdio.h>

// int main(){

//     float salarios = 0, somaMulher = 0, mediaMulher = 0,maiorSalario = 0;
//     char sexo, sexoMaior;
//     int qtdEntre = 0, qtdMulheres = 0;

//     for(int i = 0; i < 5; i++){
//         printf("Digite seu salario: ");
//         scanf("%f", &salarios);
//         printf("Digite seu sexo [ m / f ]: ");
//         scanf(" %c", &sexo);
//         if(salarios >= 2200 && salarios <= 4000){
//             qtdEntre++;
//         }
//         if(sexo == 'f' || sexo == 'F'){
//             somaMulher+=salarios;
//             qtdMulheres++;
//         }
//         if(salarios > maiorSalario){
//             maiorSalario = salarios;
//             sexoMaior = sexo;
//         }
//     }
//     mediaMulher = somaMulher/qtdMulheres;
//     printf("Numero de pessoas que ganham entre R$2200 e R$4000: %d\n", qtdEntre);
//     printf("Media salarial da mulheres: R$%.2f\n", mediaMulher);
//     printf("Maior salario: R$%.2f\n", maiorSalario);
//     if(sexoMaior == 'm' || sexoMaior == 'M'){
//         printf("Sexo da pessoa com maior salario: Masculino");
//     } else{
//         if(sexoMaior == 'f' || sexoMaior == 'F'){
//             printf("Sexo da pessoa com maior salario: Feminino");
//         }
//     }
    

//     return 0;
// }





// QUEST2
// #include <stdio.h>

// int main(){

//     float alturas[6], somaAltura = 0, media = 0;
//     int qtdMaior = 0;

//     for(int i = 0; i < 6; i++){
//         printf("Digite sua altura: ");
//         scanf("%f", &alturas[i]);
//         somaAltura += alturas[i];
//     }
//     media = somaAltura / 6;
//     printf("Media: %.2f\n", media);
//     for(int i = 0; i < 6; i++){
//         if(alturas[i] > (media*2)){
//             qtdMaior++;
//         }
//     }
//     printf("Quantidade de pessoas que possuem uma altura maior que o dobro da media: %d", qtdMaior);

//     return 0;
// }






// QUEST 3
// #include <stdio.h>

// int main(){

//     int numeros[2][3];

//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             printf("Digite um numero inteiro: ");
//             scanf("%d", &numeros[i][j]);
//         }
//     }
//     printf("Numeros que sao impares: \n");
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             if(numeros[i][j] % 2 != 0){
//                 printf("%d ", numeros[i][j]);
//             }
//         }
//     }
    
//     return 0;
// }





// QUEST 4
// #include <stdio.h>
// #include <string.h>

int main(){
    char paises[7][20], paisMoradia[7][20];
    int qtdCaracter = 0, comp = 0;

    for(int i = 0; i < 7; i++){
        printf("Digite seu pais: ");
        scanf("%s", paises[i]);
        comp = strcmp(paises[i], "japao");
        if(comp == 0){
            printf("Voce e xingling, nasceu no japao.\n");
        } else{
            printf("Voce nao e xingling, nao nasceu no japao.\n");
        }
        qtdCaracter = strlen(paises[i]);  
        printf("Quantidade de caracteres: %d\n", qtdCaracter);
        strcpy(paisMoradia[i], paises[i]);
        if(qtdCaracter > 7){
            strcat(paises[i], "-zao");
        } else{
            if(qtdCaracter <= 4){
                strcat(paises[i], "-zinho");
            }
        }
        printf("Seu pais: %s\n", paises[i]);
    }   
    return 0;
}