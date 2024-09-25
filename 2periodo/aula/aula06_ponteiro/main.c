#include <stdio.h>
//!Exemplo
// void troca(int *pa, int *pb);

// int main(void){
//     int a = 10, b=20;
//     troca(&a, &b);
//     printf("a = %d b = %d", a,b);
//     return 0;
// }

// void troca(int *pa, int *pb){
//         int tmp = *pb;
//         *pb = *pa;
//         *pa = tmp;
// }



// Número 1

// void maiorMenor(int vetor[], int *ptrmenor, int *ptrmaior);

// int main(){
//     int vetor[4], maior = 0, menor = 0;
//     int *ptrmaior = &maior, *ptrmenor = &menor;

//     for(int i = 0; i < 4; i++){
//         printf("Digite um valor: ");
//         scanf("%d", &vetor[i]);
//     }
//     maiorMenor(vetor, ptrmenor, ptrmaior);
//     printf("Maior: %d, Menor: %d", maior, menor);
//     return 0;
// }

// void maiorMenor(int vetor[], int *ptrmenor, int *ptrmaior){
//     for(int i = 0; i < 4; i++){
//         if (*(vetor + i) > *ptrmaior){
//             *ptrmaior = *(vetor + i);
//         }
//         if (*(vetor + i) < *ptrmenor || i == 0){
//             *ptrmenor = *(vetor + i);
//         }
//     }
// }



//Número 2

// void mediaNum(float vetor[], float *media);

// int main(){

//     float vetor[5], media = 0;
//     for(int i = 0; i < 5; i++){
//         printf("Nota%d: ", i+1);
//         scanf("%f", &vetor[i]);
//     }
//     mediaNum(vetor, &media);

//     printf("Media: %.2f", media);

//     return 0;
// }

// void mediaNum(float vetor[], float *media){
//     float soma = 0;
//     for(int i = 0; i < 5; i++){
//         soma += *(vetor + i);
//     }
//     *media = soma / 5;
// }

// #include <string.h>

// int main(){

//     char frase[100];
//     int tamanho = 0;

//     printf("Digite uma frase: ");
//     fgets(frase, sizeof(frase), stdin);
//     tamanho = strlen(frase);
//     for(int i = 0; i < strlen(frase); i++){
//         if(frase[i] == ' ' || frase[i] == '\n'){
//             tamanho--;
//         }
//     }
//     printf("Sua frase é: %s\ne seu tamanho é: %d", frase, tamanho);

//     return 0;
// }



// void trocar(int *pa, int *pb);

// int main(){

//     int a = 10, b = 20;
//     trocar(&a, &b);
//     printf("a = %d, b = %d", a, b);

//     return 0;
// }

// void trocar(int *pa, int *pb){
//     int tmp = *pb;
//     *pb = *pa;
//     *pa = tmp;
// }


// int main(){

//     char frase[100];
//     printf("Digite uma frase: ");
//     fgets(frase, sizeof(frase), stdin);
//     printf("A frase digitada foi: %s", frase);

//     return 0;
// }


// void maiorMenor(int ve[], int *ma, int *me);

// int main(){

//     int array[4], maior = 0, menor = 0;
//     for(int i = 0; i < 4; i++){
//         printf("Digite um valor: ");
//         scanf("%d", &array[i]);
//     }
//     maiorMenor(array, &maior, &menor);
//     printf("O maior e: %d\nO menor e: %d", maior, menor);

//     return 0;
// }

// void maiorMenor(int ve[], int *ma, int *me){
//     for(int i = 0; i < 4; i++){
//         if(*(ve + i) > *ma){
//             *ma = *(ve + i);
//         }
//         if(*(ve + i) < *me || i == 0){
//             *me = *(ve + i);
//         }
//     }
// }

// int mediaArray(float array[], float *so, float *me);

// int main(){

//     float array[5], soma = 0, media = 0;
//     float *ptrsoma = &soma, *ptrmedia = &media;
//     for(int i = 0; i < 5; i++){
//         printf("Digite um valor: ");
//         scanf("%f", &array[i]);
//     }

//     mediaArray(array, ptrsoma, ptrmedia);
//     printf("A media e: %.2f", media);

//     return 0;
// }

// int mediaArray(float array[], float *so, float *me){
//     for(int i = 0; i < 5; i++){
//         *so += *(array + i);
//     }
//     *me = *so / 5;
//     return *me;
// }

#include <string.h>

void contar_caracteres(char *str, int *numCaracteres);

int main(){

    char string[50];
    int qtd = 0;
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }

    contar_caracteres(string, &qtd);

    printf("A string possui %d caracteres", qtd);
    return 0;
}

void contar_caracteres(char *str, int *numCaracteres){
    *numCaracteres = 0;
    while(str[*numCaracteres] != '\0'){
        (*numCaracteres)++;
    }
}



