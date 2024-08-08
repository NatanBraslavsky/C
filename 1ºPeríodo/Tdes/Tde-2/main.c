//Questão 1:

// #include <stdio.h>

// int main(){

//     int numero = 0;

//     printf("Digite um numero: ");
//     scanf("%d", &numero);
//     for(int i = 1; i <= 10; i++){
//         printf("%d * %d = %d\n", numero, i, numero*i);
//     }

//     return 0;
// }




//Questão 2:

// #include <stdio.h>

// int main(){

//     int numero = 0, maior = 0, menor = 0;

//     for(int i = 0; i<20; i++){
//         printf("Digite um numero: ");
//         scanf("%d", &numero);
//         if(numero > maior){
//             maior = numero;
//         }
//         if(numero < menor || menor == 0){
//             menor = numero;
//         }
//     }
//     printf("Meior valor: %d\nMenor valor: %d", maior, menor);

//     return 0;
// }




//Questão 3:

// #include <stdio.h>

// int main(){

//     float altura[5], maiorAltura = 0, menorAltura = 0, media = 0, soma = 0;
//     char sexo;
//     int qtdFeminino = 0, qtdMasculino = 0;

//     for(int i = 0; i < 5; i++){
//         printf("Digite sua altura: ");
//         scanf("%f", &altura[i]);
        
//         if(altura[i] > maiorAltura){
//             maiorAltura = altura[i];
//         }
//         if(altura[i] < menorAltura || menorAltura == 0){
//             menorAltura = altura[i];
//         }
//         printf("Digite seu sexo [ m / f ]: ");
//         scanf(" %c", &sexo);
//         if(sexo == 'm' || sexo == 'M'){
//             soma += altura[i];
//             qtdMasculino++;
//         }
//         else if(sexo == 'f' || sexo == 'F'){
//             qtdFeminino++;
//         }
//     }
//     media = soma/qtdMasculino;
//     printf("Maior altura: %.2f\nMenor Altura: %.2f\n", maiorAltura, menorAltura);
//     printf("Media das alturas dos homens: %.2f\n", media);
//     printf("Quantidade de mulheres: %d", qtdFeminino);

//     return 0;
// }




//Questão 4:

// #include <stdio.h>

// int main(){

//     char sexo, resposta;
//     int qtdSim = 0, qtdNao = 0, qtdFemininoSim = 0, qtdMasculinoNao = 0, porcentagemFem = 0, porcentagemMas = 0;

//     for(int i = 0; i < 10; i++){
//         printf("Digite seu sexo: [ m / f ]: ");
//         scanf(" %c", &sexo);
//         printf("Digite sua resposta [ s / n ]: ");
//         scanf(" %c", &resposta);
//         if(resposta == 's' || resposta == 'S'){
//             qtdSim++;
//             if(sexo == 'f' || sexo == 'F'){
//                 qtdFemininoSim++; 
//             }
//         } else if(resposta == 'n' || resposta == 'N'){
//             qtdNao++;
//             if(sexo == 'm' || sexo == 'M'){
//                 qtdMasculinoNao++;
//             }
//         }
//     }
//     porcentagemFem = (qtdFemininoSim * 100) / 10;
//     porcentagemMas = (qtdMasculinoNao * 100) / 10;
//     printf("Numero de pessoas que responderam sim: %d\nNumero de pessoas que responderam nao: %d\n", qtdSim, qtdNao);
//     printf("Porcentagem de mulheres que responderam sim: %d%%\n", porcentagemFem);
//     printf("Porcentagem de homens que responderam nao: %d%%", porcentagemMas);
    
//     return 0;
// }




//Questão 5:

// #include <stdio.h>

// int main(){

//     float altura[5], media = 0, soma = 0;

//     for(int i = 0; i < 5; i++){
//         printf("Digite sua altura: ");
//         scanf("%f", &altura[i]);
//         soma += altura[i];
//     }
//     media = soma/5;
//     printf("A media de altura e %.2f", media);
//     return 0;
// }




//Questão 6:

// #include <stdio.h>

// int main(){

//     float salario[4], soma = 0, media = 0; 

//     for(int i = 0; i < 4; i++){
//         printf("Digite o salario da %da pessoa: R$", i+1);
//         scanf("%f", &salario[i]);
//         soma += salario[i];
//     }
//     media = soma/4;
//     printf("Media: %.2f\n", media);
//     printf("Salarios abaixo da media: \n");
//     for(int i = 0; i < 4; i++){
//         if(salario[i] < media){
//             printf("R$%.2f\n", salario[i]);
//         }
//     }

//     return 0;
// }




//Questão 7:

// #include <stdio.h>

// int main(){

//     int idade[5], maisVelho = 0;
//     float altura[5], maisAlta = 0;

//     for(int i = 0; i < 5; i++){
//         printf("Digite sua idade: ");
//         scanf("%d", &idade[i]);
//         printf("Digite sua altura: ");
//         scanf("%f", &altura[i]);
//         if(altura[i] > maisAlta){
//             maisAlta = altura[i];
//             maisVelho = idade[i];
//         }
//     }
//     printf("Idade da pessoa mais alta: %d", maisVelho);

//     return 0;
// }




//Questão 8:

// #include <stdio.h>
// #include<string.h>

// int main(){

//     char nome[5][20];
//     int ler[5], maior = 0; 
//     for(int i = 0; i < 5; i++){
//         printf("Digite seu nome: ");
//         scanf("%s", nome[i]);
//         ler[i] = strlen(nome[i]);
//         if(ler[i] > maior){
//             maior = ler[i];
//         }
//     }
//     printf("Numero de caracteres da pessoa com maior nome: %d", maior);

//     return 0;
// }




//Questão 9:

// #include <stdio.h>
// #include <string.h>

// int main(){

//     char cargo[5][20];
//     int comp[5], informado = 0;

//     for(int i = 0; i < 5; i++){
//         printf("Digite seu cargo: ");
//         scanf("%s", cargo[i]);
//         comp[i] = strcmp(cargo[i], "diretor");
//         if(comp[i] == 0){
//             informado = 1;
//         }
//     }
//     if(informado == 1){
//         printf("Cargo Diretor foi informado.");
//     } else{
//         printf("Cargo Diretor nao foi informado.");
//     }

//     return 0;
// }




//Questão 10:

// #include <stdio.h>
// #include <string.h>

// int main (){

//     int habitantes[4], menor = 0;
//     char estado[4][40], nomeMenor[40];

//     for(int i = 0; i < 4; i++){
//         printf("Nomes do %do estado: ", i+1);
//         scanf("%s", estado[i]);
//         printf("Habitantes: ");
//         scanf("%d", &habitantes[i]);
//         if(habitantes[i] < menor || menor == 0){
//             menor = habitantes[i];
//             strcpy(nomeMenor, estado[i]);
//         } 
//     }
//     printf("O estado que tem o menor numero de habitantes e o: %s", nomeMenor);

//     return 0;
// }




//Questão 11:

// #include <stdio.h>
// #include <string.h>

// int main (){

//     char nome[5][20], pais[5][20], nome_pais[5][40];

//     for(int i = 0; i < 5; i++){
//         printf("Digite seu nome: ");
//         scanf("%s", nome[i]);
//         printf("Digite seu pais: ");
//         scanf("%s", pais[i]);

//         nome_pais[i][0] = '\0';
//         strcat(nome_pais[i], nome[i]);
//         strcat(nome_pais[i], "-");
//         strcat(nome_pais[i], pais[i]);
//     }
//     for(int i = 0; i < 5; i++){
//         printf("\nNome e pais da %da pessoa: %s", i+1, nome_pais[i]);
//     }

//     return 0;
// }




//Questão 12:

#include <stdio.h>

int main (){

    int matrizSalario[2][4], maiorMil[2][4];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("Salario na posicao %d %d: R$", i, j);
            scanf("%d", &matrizSalario[i][j]);
            if(matrizSalario[i][j] > 1000){
                maiorMil[i][j] = matrizSalario[i][j];
            }
        }
    }
    printf("Salarios a cima de R$1000:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            if(maiorMil[i][j] == matrizSalario[i][j]){
                printf("R$%d\n", matrizSalario[i][j]);
            }
        }
    }
    return 0;
}




