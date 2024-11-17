#include <stdio.h>
#include <stdlib.h>

struct livro {
    char titulo[30], autor[30];
    int numPaginas;
};

typedef struct livro livro;

void informacoes(livro livro);

int main(){
    livro livro;

    printf("Digite o titulo do livro: ");
    fgets(livro.titulo, sizeof(livro.titulo), stdin);

    printf("Digite o autor do livro: ");
    fgets(livro.autor, sizeof(livro.autor), stdin);

    printf("Numero de paginas: ");
    scanf("%d", &livro.numPaginas);

    informacoes(livro);

    return 0;
}

void informacoes(livro livro){
    printf("\nTitulo: %s", livro.titulo);
    printf("Autor: %s", livro.autor);
    printf("Numero de paginas: %d", livro.numPaginas);
}
