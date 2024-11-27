#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

// struct Tempo{
//     int hora, minuto, segundo;
// };

// typedef struct Tempo tempo;

// struct Data{
//     int dia, mes, ano;
// };

// typedef struct Data data;

// struct DataHora{
//     data data;
//     tempo tempo;
// };

// typedef struct DataHora datahora;

// void informacaoData(datahora datahora);
// void informacaoHora(datahora datahora);

// int main(){

//     datahora datahora;

//     printf("Dia/Mes/Ano: ");
//     scanf("%d/%d/%d", &datahora.data.dia, &datahora.data.mes, &datahora.data.ano);

//     printf("Hora:Minuto:Segundo: ");
//     scanf("%d:%d:%d", &datahora.tempo.hora, &datahora.tempo.minuto, &datahora.tempo.segundo);

//     informacaoData(datahora);
//     informacaoHora(datahora);

//     return 0;
// }

// void informacaoData(datahora datahora){
//     printf("%d/%d/%d\n", datahora.data.dia, datahora.data.mes, datahora.data.ano);
// }

// void informacaoHora(datahora datahora){
//     printf("%d:%d:%d", datahora.tempo.hora, datahora.tempo.minuto, datahora.tempo.segundo);
// }



//!Número 5

// Crie uma estrutura chamada ContaBancaria com campos para o número da conta, o
// nome do titular e o saldo. Escreva funções para depositar dinheiro na conta, sacar
// dinheiro da conta e imprimir o saldo atual.

// struct ContaBancaria{
//     int numConta;
//     char nome[50];
//     float saldoDeposito;
//     float deposito;
//     float saque;
// };

// typedef struct ContaBancaria contabancaria;

// void depositar (contabancaria *conta);
// void versaldo (contabancaria *conta);
// void sacar (contabancaria *conta);
// void pause (float);

// int main(){

//     contabancaria conta;
//     conta.saldoDeposito = 0;

//     int escolha = 0;
//     do{
//         printf("\n1 - Depositar\n2 - Sacar\n3 - Ver saldo\n4 - Sair\n\nEscolha: ");
//         scanf("%d", &escolha);
    
//         switch (escolha) {
//             case 1:
//             depositar(&conta);
//             break;

//             case 2:
//             sacar(&conta);
//             break;

//             case 3:
//             versaldo(&conta);
//             break;

//             default:
//             printf("Saindo do programa...");
//             pause(1);
//         }
//     } while(escolha != 4);
//     return 0;
// }

// void depositar (contabancaria *conta){
//     printf("\nQuanto deseja depositar: R$");
//     scanf("%f", &conta->deposito);
//     if(conta->deposito > 0){
//         conta->saldoDeposito += conta->deposito;
//         printf("Valor depositado com sucesso.\n");
//         pause(1);
//     } else{
//         printf("Nao aceitamos valores negativos de deposito.\n");
//         pause(1);
//     }
// }

// void sacar (contabancaria *conta){
//     printf("\nQuanto deseja sacar: R$");
//     scanf("%f", &conta->saque);
//     if(conta->saque > conta->saldoDeposito || conta->saque < 0){
//         printf("Nao e possivel sacar esse valor.\n");
//         pause(1);
//     } else{
//         conta->saldoDeposito -= conta->saque;
//         printf("Saque realizado com sucesso.");
//         pause(1);
//     }

// }

// void versaldo (contabancaria *conta){
//     printf("\n---=Saldo da conta=---\nR$%.2f\n", conta->saldoDeposito);
//     pause(1);
// }

// void pause (float delay1) {

//    if (delay1<0.001) return;

//    float inst1=0, inst2=0;

//    inst1 = (float)clock()/(float)CLOCKS_PER_SEC;

//    while (inst2-inst1<delay1) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

//    return;

// }



//!Número 6 


// Crie uma estrutura chamada Carro com campos para a marca, o modelo e o ano de
// fabricação. Declare um array de 3 carros e preencha-o com informações de
// diferentes carros. Em seguida, escreva um programa que percorra o array e imprima
// as informações de cada carro.

// struct Carro{
//     char marca[50], modelo[50];
//     int ano;
// };

// typedef struct Carro carro;

// int main(){

//     carro car[3];

//     for(int i = 0; i < 3; i++){
//         printf("Marca: ");
//         scanf("%s", car[i].marca);

//         printf("Modelo: ");
//         scanf("%s", car[i].modelo);

//         printf("Ano: ");
//         scanf("%d", &car[i].ano);
//         printf("\n");
//     }

//     for(int i = 0; i < 3; i++){
//         printf("\nInformações: \nMarca: %s\nModelo: %s\nAno: %d", car[i].marca, car[i].modelo, car[i].ano);
//     }

//     return 0;
// }


// //!Número 7

// Crie uma estrutura Funcionario com campos para nome e salário. Crie um programa
// que permita ao usuário digitar o número de funcionários e, em seguida, aloque
// dinamicamente um array de Funcionarios. Permita que o usuário insira o nome e o
// salário de cada funcionário e, em seguida, calcule e imprima o salário médio dos
// funcionários.

// struct Funcionario{
//     char nome[50];
//     float salario;
// };

// typedef struct Funcionario funcionario;

// int main(){

//     float soma=0, media;
//     int qtdFunc = 0;
//     printf("Qtd Funcionarios: ");
//     scanf("%d", &qtdFunc);

//     funcionario *func = (funcionario*) malloc (qtdFunc * sizeof(funcionario));

//     for(int i = 0; i < qtdFunc; i++){
//         printf("\n%do Funcionario:\n\nNome: ", i+1);
//         scanf("%s", func[i].nome);

//         printf("Salario: ");
//         scanf("%f", &func[i].salario);
//         soma+=func[i].salario;
//     }
//     media = soma / qtdFunc;
//     printf("Media: %.2f", media);

//     return 0;
// }



// Crie uma estrutura Cliente com campos para nome e idade. Crie um programa que
// permita ao usuário digitar o número de clientes e, em seguida, aloque
// dinamicamente um array de Clientes. Permita que o usuário insira o nome e a idade
// de cada cliente e, em seguida, identifique e imprima o cliente mais velho.

// struct Cliente{
//     char nome[50];
//     int idade;
// };

// typedef struct Cliente cliente;

// int main(){

//     int qtdCliente = 0;
//     int maior = 0;
//     int index;
    
//     printf("Qtd cliente: ");
//     scanf("%d", &qtdCliente);

//     cliente *cli = (cliente*) malloc (qtdCliente * sizeof(cliente));

//     for(int i = 0; i < qtdCliente; i++){

//         printf("\n%do Cliente\nNome: ", i+1);
//         scanf("%s", cli[i].nome);

//         printf("Idade: ");
//         scanf("%d", &cli[i].idade);
//         if(cli[i].idade > maior){
//             maior = cli[i].idade;
//             index = i;
//         }
//     }
//     printf("Cliente mais velho: %s", cli[index].nome);

//     free(cli);

//     return 0;
// }



//!Número 9;

// Crie uma estrutura Produto com campos para nome, preço e quantidade em estoque.
// Crie um programa que permita ao usuário digitar o número de produtos e, em
// seguida, aloque dinamicamente um array de Produtos. Permita que o usuário insira o
// nome, o preço e a quantidade em estoque de cada produto e, em seguida, calcule e
// imprima o valor total em estoque.

// struct Produto{
//     char nome[50];
//     float preco;
//     int qtdEstoque;
// };

// typedef struct Produto produto;

// int main(){

//     int qtd = 0;
//     printf("Quantidade de produtos: \n");
//     scanf("%d", &qtd);
//     float valorTotal[qtd];

//     produto *pr = (produto*) malloc (qtd * sizeof(produto));

//     for(int i = 0; i < qtd; i++){
//         printf("%do produto\nNome: ", i+1);
//         scanf("%s", pr[i].nome);

//         printf("Preco: R$");
//         scanf("%f", &pr[i].preco);

//         printf("Qtd em estoque: ");
//         scanf("%d", &pr[i].qtdEstoque);
//         valorTotal[i] = pr[i].preco * pr[i].qtdEstoque;
//     }

//     for(int i = 0; i < qtd; i++){
//         printf("\nValor total do %s: R$ %.2f\n", pr[i].nome, valorTotal[i]);
//     }

//     return 0;
// }


//!Número 10

// 10. Faça um programa em C para manipular registros de produtos, conforme a estrutura
// a seguir.
// struct produto{
//      int codigo;
//      char descricao[30];
//      float preco;
// };
// O programa deve:
// a) Declarar um vetor que armazene os 10 diferentes produtos com o layout da estrutura;
// b) Cadastrar os produtos e exiba todos os produtos.
// c) Usuário informará um percentual de aumento de preços. Reajuste o preço de cada produto e
// exiba a estrutura após o reajuste.



//!Número 2 prova

struct Prefeito{
    char nome[50];
    int idade;
    char sexo;
};

typedef struct Prefeito prefeito;

struct Cidade{
    char nome[50];
    int nHabitantes;
    prefeito pref;
};

typedef struct Cidade cidade;

int main(){

    cidade ci;

    printf("Nome cidade: ");
    fgets(ci.nome, sizeof(ci.nome), stdin);

    printf("Numero de habitantes: ");
    scanf("%d", &ci.nHabitantes);
    getchar();

    printf("Nome prefeito: ");
    fgets(ci.pref.nome, sizeof(ci.pref.nome), stdin);

    printf("Idade prefeito: ");
    scanf("%d", &ci.pref.idade);
    getchar();


    printf("Sexo prefeito m/f: ");
    scanf(" %c", &ci.pref.sexo);
    getchar();

    printf("\n\nCidade: %s\nNumero de habitantes: %d\nPrefeito: %s\nIdade: %d\nSexo: %c", ci.nome, ci.nHabitantes, ci.pref.nome, ci.pref.idade, ci.pref.sexo);

    return 0;
}