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

// struct cadastroAluno{
//     char nomeAluno[30];
//     int numMatricula;
//     float notas[3];
// };

// typedef struct cadastroAluno aluno;

// void mediaNotas(aluno al);

// int main(){
//     aluno al;

//     printf("Digite o nome do aluno: ");
//     fgets(al.nomeAluno, sizeof(al.nomeAluno), stdin);

//     printf("Digite a matricula do aluno: ");
//     scanf("%d", &al.numMatricula);

//     for(int i = 0; i < 3; i++){
//         printf("Nota %d: ", i+1);
//         scanf("%f", &al.notas[i]);
//     }

//     mediaNotas(al);
    
//     return 0;
// }

// void mediaNotas(aluno al){
//     float soma;
//     float media;
//     for(int i = 0; i < 3; i++){
//         soma+= al.notas[i];
//     }
//     media = soma / 3;
//     printf("Media: %.2f", media);
// }



//!Numero 3

// struct Data{
//     int dia, mes, ano;
// };

// typedef struct Data data;

// struct Aluno{
//     char nome[50];
//     int matricula;
//     data data;
// };

// typedef struct Aluno aluno;

// void informacoes(aluno alu);

// int main(){
//     aluno alu;
//     printf("Nome do aluno: ");
//     fgets(alu.nome, sizeof(alu.nome), stdin);
//     printf("Matricula: ");
//     scanf("%d", &alu.matricula);
//     printf("Dia do nascimento: ");
//     scanf("%d", &alu.data.dia);
//     printf("Mes do nascimento: ");
//     scanf("%d", &alu.data.mes);
//     printf("Ano do nascimento: ");
//     scanf("%d", &alu.data.ano);
//     informacoes(alu);

//     return 0;
// }

// void informacoes(aluno alu){
//     printf("Nome: %sMatricula: %d\nNascimento: %d/%d/%d", alu.nome, alu.matricula, alu.data.dia, alu.data.mes, alu.data.ano);
// }



//!Número 4

struct Tempo{
    int hora, minuto, segundo;
};

typedef struct Tempo tempo;

struct Data{
    int dia, mes, ano;
};

typedef struct Data data;

struct DataHora{
    data data;
    tempo tempo;
};

typedef struct DataHora datahora;

void informacaoData(datahora datahora);
void informacaoHora(datahora datahora);

int main(){

    datahora datahora;

    printf("Dia/Mes/Ano: ");
    scanf("%d/%d/%d", &datahora.data.dia, &datahora.data.mes, &datahora.data.ano);

    printf("Hora:Minuto:Segundo: ");
    scanf("%d:%d:%d", &datahora.tempo.hora, &datahora.tempo.minuto, &datahora.tempo.segundo);

    informacaoData(datahora);
    informacaoHora(datahora);

    return 0;
}

void informacaoData(datahora datahora){
    printf("%d/%d/%d\n", datahora.data.dia, datahora.data.mes, datahora.data.ano);
}

void informacaoHora(datahora datahora){
    printf("%d:%d:%d", datahora.tempo.hora, datahora.tempo.minuto, datahora.tempo.segundo);
}


