#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <ctype.h>
// Enzo Ribas|19|M|120|40|5|12:34
// NOME| IDADE | SEXO | VALOR-VENDA | QTD | HORARIO DE COMPRA

struct Cliente {
    char nome[100];
    char sexo;
    int idade;
};

typedef struct Cliente cliente;

struct Venda {
    struct Cliente cliente;
    float valorVenda;
    int qtd;
    int hora;
    int minuto;
};

typedef struct Venda venda;

void cadastrar_vendas();

int main(void) {
    int opcao = -1;

    do{
        printf("\n\033[1;36m----------==== MENU ====----------\033[0;m\n");
        printf("\033[30m1- \033[32mCadastrar nova(s) venda(s)\033[m\n");
        printf("\033[30m2- \033[32mVer informacoes de uma venda especifica\033[m\n");
        printf("\033[30m3- \033[32mVer informacoes de todas as vendas\033[m\n");
        printf("\033[30m4- \033[32mEncerrar programa\033[m\n");
        printf("-> ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("\n\033[1;31mOpcao invalida, tente novamente!\033[0;m\n\n"); 
            while(getchar() != '\n');
            continue;
        }
        getchar();

        switch(opcao) {
            case 1: 
                cadastrar_vendas();
                break;
            
            case 2: 
                break;
            
            case 3: 
                // informacao_vendas();
                break;
            
            case 4: 
                printf("Saindo do programa...\n");
                break;

            default:
                printf("\033[1;31mOpcao invalida, tente novamente!\033[0;m\n");
                main();
        }
    } while (opcao != 4);

    return 0;
}

//!cadastro vendas
void cadastrar_vendas() {
    int qtdVendas = 0, nomeValido = 0;
    char continuarCadastrando, voltarAoMenu;
    FILE *file = fopen("registro.txt", "a");

    if (file == NULL) {
        printf("\033[1;31mErro ao abrir o arquivo.\033[0m\n");
        return;
    }
    
    do{
        printf("Quantas vendas deseja cadastrar? ");
        if(scanf("%d", &qtdVendas) != 1 || qtdVendas < 0){
            printf("\033[1;31mERRO! Digite um valor valido!\033[0m\n");
            while(getchar() != '\n');
            qtdVendas = -1;
        }
    } while(qtdVendas < 0);
    getchar();

    cliente *venda = (cliente*) malloc (qtdVendas * sizeof(cliente));

    if (venda == NULL) {
        printf("\033[1;31mERRO! Memoria insuficiente!\033[m\n");
        return;
    }

    // Enzo Ribas|19|M|120|40|5|12:34
    // NOME| IDADE | SEXO | VALOR-VENDA | QTD | HORARIO DE COMPRA

    char nome[50], sexo[3];
    int idade = 0, qtdItensVendas = 0, hora, minuto, tamanhoNome, testeSexo, tamanhoSexo;
    float valorVenda = 0;

    for (int i = 0; i < qtdVendas; i++) {
        do{
            nomeValido = 0;
            printf("Nome do cliente: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0'; //? Para tirar o "\n" do final da string
            tamanhoNome = strlen(nome); 
            
            if (strlen(nome) < 4) {
                nomeValido = 1;
            }
            for (int i = 0; i < tamanhoNome; i++) {
                if (isdigit(nome[i])) {
                    nomeValido = 1;
                    break;
                }
            }
            if(nomeValido == 1){
                printf("\033[1;31mERRO! Digite um valor valido!\033[0m\n");
            }
        } while(nomeValido == 1);


        //! Cadastro idade do cliente
        do {
            printf("Idade do cliente: ");
            if (scanf("%d", &idade) != 1 || idade < 0) {
                printf("\033[1;31mERRO! Digite um valor valido!\033[0m\n");
                while(getchar() != '\n');
                idade = -1;
            }
        } while (idade < 0);

        
        //! Cadastro sexo do cliente
        do {
            testeSexo = 0;
            printf("Sexo do cliente: ");
            scanf(" %2s", sexo);
            tamanhoSexo = strlen(sexo);
            if (tamanhoSexo > 1) {
                printf("\033[1;31mERRO! Valor invalido!\033[0m\n");
                while (getchar() != '\n');
                testeSexo = 1;
            }
            else if (sexo[0] != 'm' && sexo[0] != 'M' && sexo[0] != 'f' && sexo[0] != 'F' && sexo[0] != 'n' && sexo[0] != 'N') {
                printf("\033[1;31mERRO! Valor invalido!\033[0m\n");
                testeSexo = 1;
            }
        } while (testeSexo == 1);

        
        //! Cadastro valor da venda
        do {        
            printf("Valor da venda: ");
            if(scanf("%f", &valorVenda) != 1 || valorVenda < 0) {
                printf("\033[1;31mERRO! Valor invalido!\033[0m\n");
                while(getchar() != '\n');
                valorVenda = -1;
            }
        } while(valorVenda < 0);
        getchar();
        
        //! Cadastro quantidade de itens
        do{
            printf("Quantidade de itens: ");
            if(scanf("%d", &qtdItensVendas) != 1 || qtdItensVendas < 0){
                printf("\033[1;31mERRO! Digite um valor valido!\033[m");
                while(getchar() != '\n');
                qtdItensVendas = -1;
            }
        } while(qtdItensVendas < 0);
        getchar();

        //! Cadastro horário da compra
        do {
            printf("Horario da compra (hora:minuto): ");
            if (scanf("%d:%d", &hora, &minuto) != 2 || hora < 0 || hora >= 24 || minuto < 0 || minuto >= 60) {
                printf("\033[1;31mERRO! Digite um valor valido!\033[0m\n");
                while(getchar() != '\n');
                hora = -1;
                minuto = -1;
            }
        } while (hora < 0 || hora >= 24 || minuto < 0 || minuto >= 60);
        getchar();

        printf("\033[33mVenda cadastrada com sucesso!\033[m\n");
        fprintf(file, "%s|%d|%s|%.2f|%d|%02d:%02d\n", nome, idade, sexo, valorVenda, qtdItensVendas, hora, minuto);
    }
    do{
        printf("Vendas finalizadas. Deseja continuar cadastrando(s/n)?");
        scanf(" %c", &continuarCadastrando);
        if(continuarCadastrando != 's' && continuarCadastrando != 'S' && continuarCadastrando != 'n' && continuarCadastrando != 'N'){
            printf("\033[1;31mERRO! Digite um valor valido!\033[0m\n");
        }
    } while(continuarCadastrando != 's' && continuarCadastrando != 'S' && continuarCadastrando != 'n' && continuarCadastrando != 'N');

    if(continuarCadastrando == 's' || continuarCadastrando == 'S'){
        cadastrar_vendas();
    } else{
        do{
            printf("Deseja voltar ao menu(s/n)?");
            scanf(" %c", &voltarAoMenu);
            if(voltarAoMenu != 's' && voltarAoMenu != 'S' && voltarAoMenu != 'n' && voltarAoMenu != 'N'){
                printf("\033[1;31mERRO! Digite um valor valido!\033[0m\n");
            }
        } while(voltarAoMenu != 's' && voltarAoMenu != 'S' && voltarAoMenu != 'n' && voltarAoMenu != 'N');

        if(voltarAoMenu == 's' || voltarAoMenu == 'S'){
            main();
        } else{
            exit(0);
        }
    }
    free(venda);
}
