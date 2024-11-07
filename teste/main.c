//Número 19
#include <stdio.h>

// int verificar_pares (int *v);

// int main(){
//     int vetor[6];
//     int qtdpares = 0;
//     for(int i = 0; i < 6; i++){
//         printf("Digite o valor na posicao %d: ", i+1);
//         scanf("%d", &vetor[i]); 
//     }
//     qtdpares = verificar_pares(vetor);
//     printf("Quantidade de pares: %d", qtdpares);
//     return 0;
// }

// int verificar_pares(int *v){
//     int qtdPares = 0;
//     for(int i = 0; i < 6; i++){
//         if(*(v+i) % 2 == 0){
//             qtdPares++;
//         }
//     }
//     return qtdPares;
// }


//Número 20

// int inverter_vetor(int *v1, int *v2, int n);

// int main(){
//     int tamanho, maior;
//     printf("Digite o tamanho do vetor: ");
//     scanf("%d", &tamanho);
//     int vetor[tamanho], vetorInverso[tamanho];
//     for(int i = 0; i < tamanho; i++){
//         printf("Digite o valor na posicao %d: ", i + 1);
//         scanf("%d", &vetor[i]);
//     }
//     maior = inverter_vetor(vetor, vetorInverso, tamanho);
//     printf("Vetor invertido: ");
//     for(int i = 0; i < tamanho; i++){
//         printf("%d ", vetorInverso[i]);
//     }
//     printf("\nMaior valor: %d", maior);

//     return 0;
// }


int main(){

    char resposta;
    do{
        printf("Digite 's': ");
        scanf(" %c", &resposta);
        if(resposta != 's' && resposta != 'S'){
            printf("ERRO. Digite um valor valido.\n");
        }
    }while(resposta != 's' && resposta != 'S');

    return 0;
}