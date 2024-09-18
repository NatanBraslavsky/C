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



//Número 1

void maiorMenor(int vetor[]);

int main(){
    int vetor[4];
    maiorMenor(vetor);
    for(int i = 0; i < 4; i++){
        printf("%d", vetor[i]);
    }
    return 0;
    }

void maiorMenor(int vetor[]){
    for(int i = 0; i < 4; i++){
        *(vetor + i) = i;
    }
}


