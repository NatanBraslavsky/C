#include <stdio.h>

// struct aluno{
//     char nome[50];
//     int numero;
//     float nota1;
//     float nota2;
//     float nota3;
//     float media;
// };
// int main(){
//     struct aluno aluno;
//     printf("Digite seu nome: ");
//     fgets(aluno.nome, sizeof(aluno.nome), stdin);
//     printf("Digite seu numero: ");
//     scanf("%d", &aluno.numero);
//     printf("Digite a primeira nota: ");
//     scanf("%f", &aluno.nota1);
//     printf("Digite a segunda nota: ");
//     scanf("%f", &aluno.nota2);
//     printf("Digite a terceira nota: ");
//     scanf("%f", &aluno.nota3);
//     aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
//     printf("\nSeu nome: %sSeu numero: %d\nSua primeira nota: %.2f\nSua segunda nota: %.2f\nSua terceira nota: %.2f\nSua media: %.2f", aluno.nome, aluno.numero, aluno.nota1, aluno.nota2, aluno.nota3, aluno.media);
//     return 0;
// }


// ex002
// struct tempo{
//     int minuto;
//     int hora;
// };
// typedef struct tempo tempo;

// tempo converterTempo(int totalMinutos);

// int main(){

//     int total;
//     tempo tempoFinal;
//     printf("Digite o total de minutos: ");
//     scanf("%d", &total);
    
//     tempoFinal = converterTempo(total);

//     printf("%dh:%dm", tempoFinal.hora, tempoFinal.minuto);

//     return 0;
// }

// tempo converterTempo(int totalMinutos){
//     tempo tmp;
//     tmp.hora = totalMinutos / 60;
//     tmp.minuto = totalMinutos % 60;
//     return tmp;
// }


//ex003

// struct endereco{
//     char rua[50];
//     char cidade[50];
//     char estado[50];
// };

// typedef struct endereco endereco;
// struct pessoa{
//     char nome[50];
//     endereco endereco2;
// };
// typedef struct pessoa pessoa;

// void informacao(pessoa p);

// int main(){
//     pessoa pessoa1;
//     printf("Digite seu nome: ");
//     fgets(pessoa1.nome,50, stdin);
//     printf("Digite sua rua: ");
//     fgets(pessoa1.endereco2.rua, 50, stdin);
//     printf("Digite sua cidade: ");
//     fgets(pessoa1.endereco2.cidade, 50, stdin);
//     printf("Digite seu estado: ");
//     fgets(pessoa1.endereco2.estado, 50, stdin);
//     informacao(pessoa1);

//     return 0;
// }

// void informacao(pessoa p) {
//     printf("\nNome: %sRua: %sCidade: %sEstado: %s", p.nome, p.endereco2.rua, p.endereco2.cidade, p.endereco2.estado);
// }



//revisao questao 2
struct tempo{
    int minuto;
    int hora;
};

typedef struct tempo tempo;

tempo contarTempo(int minuto);

int main(){

    int min;
    tempo tempoFinal;
    printf("Digite quantos minutos: ");
    scanf("%d", &min);
    tempoFinal = contarTempo(min);
    printf("%d minutos em horas: %d:%d", min, tempoFinal.hora, tempoFinal.minuto);

    return 0;
}

tempo contarTempo(int minuto){
    tempo tmp;
    tmp.hora = minuto / 60;
    tmp.minuto = minuto % 60;
    return tmp;
}
