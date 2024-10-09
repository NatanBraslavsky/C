#include <stdio.h>

void fraseQtd(int *qtd, char f[]);

int main(){
    int qtdCaracter = 0;
    char frase[50];
    printf("Digite um frase: ");
    fgets(frase, 50, stdin);
    fraseQtd(&qtdCaracter, frase);
    printf("Quantidade de caracteres: %d", qtdCaracter);
    return 0;
}

void fraseQtd(int *qtd, char f[]){
    for(int i = 0; i <= 50; i++){
        if(f[i] == '\0' || f[i] == '\n'){
            break;
        } else if(f[i] != ' '){
            (*qtd)++;
        }
    }
}
