#include <stdio.h>

int main() {
    unsigned long long totalGraos = 1;  // Inicia com 1 grão na primeira casa
    unsigned long long graosNaCasa = 1;  // Inicia com 1 grão na primeira casa

    for(int i = 1; i < 64; i++) {
        graosNaCasa *= 2;  // Dobra os grãos para a próxima casa
        totalGraos += graosNaCasa;  // Soma o número de grãos ao total
    }

    printf("O número total de grãos no tabuleiro é: %llu\n", totalGraos);

    return 0;
}
