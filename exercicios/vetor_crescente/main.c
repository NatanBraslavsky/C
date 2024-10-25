#include <stdio.h>

void crescenteVetor(int vetor[]){
    int tmp = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(*(vetor + i) < *(vetor + j)){
                tmp = *(vetor + i);
                *(vetor + i) = *(vetor + j);
                *(vetor + j) = tmp;
            }
        }
    }
}
int main(){
    
    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    crescenteVetor(vetor);
    for(int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}