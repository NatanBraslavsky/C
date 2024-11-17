#include <stdio.h>
#include <stdlib.h>


//!Numero 1
// struct livro {
//     char titulo[30], autor[30];
//     int numPaginas;
// };

// typedef struct livro livro;

// void informacoes(livro livro);

// int main(){
//     livro livro;

//     printf("Digite o titulo do livro: ");
//     fgets(livro.titulo, sizeof(livro.titulo), stdin);

//     printf("Digite o autor do livro: ");
//     fgets(livro.autor, sizeof(livro.autor), stdin);

//     printf("Numero de paginas: ");
//     scanf("%d", &livro.numPaginas);

//     informacoes(livro);

//     return 0;
// }

// void informacoes(livro livro){
//     printf("\nTitulo: %s", livro.titulo);
//     printf("Autor: %s", livro.autor);
//     printf("Numero de paginas: %d", livro.numPaginas);
// }



//!Numero 2

struct cadastroAluno{
    char nomeAluno[30];
    int numMatricula;
    float notas[3];
};

typedef struct cadastroAluno aluno;

void mediaNotas(aluno al);

int main(){
    aluno al;

    printf("Digite o nome do aluno: ");
    fgets(al.nomeAluno, sizeof(al.nomeAluno), stdin);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &al.numMatricula);

    for(int i = 0; i < 3; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &al.notas[i]);
    }

    mediaNotas(al);
    
    return 0;
}

void mediaNotas(aluno al){
    float soma;
    float media;
    for(int i = 0; i < 3; i++){
        soma+= al.notas[i];
    }
    media = soma / 3;
    printf("Media: %.2f", media);
}


