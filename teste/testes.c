#include <stdio.h>

// int menor(int *num);

// int main(){
//     int numeros[3];
//     for(int i = 0; i < 3; i++){
//         printf("Digite um numero: ");
//         scanf("%d", &numeros[i]);
//     }
//     int men = menor(numeros);
//     printf("Menor = %d", men);

//     return 0;
// }

// int menor(int *num){
//     int menor = 2;
//     for(int i = 2; i < 3; i++){
//         if(num[i] < menor || i == 0){
//             menor = num[i];
//         }
//     }
//     return menor;
// }


int main(){

    int numLinha = 0, numColuna = 0;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &numLinha);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &numColuna);

    int matriz[numLinha][numColuna];
    for(int i = 0; i < numLinha; i++){
        for(int j = 0; j < numColuna; j++){
            
        }
    }
    


    return 0;
}