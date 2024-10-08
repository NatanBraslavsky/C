#include <stdio.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
};
typedef struct cadastro cad[4];
int main(){
    cad c;
    for(int i = 0; i < 4; i++){
        printf("Digite seu nome: ");
        fgets(c[i].nome, 50, stdin);
        printf("Digite sua idade: ");
        scanf("%d", &c[i].idade);
        getchar();
        printf("Digite sua rua: ");
        fgets(c[i].rua, 50, stdin);
    }
    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 50; i++){
            if(c[j].nome[i] == '\n'){
                c[j].nome[i] = '\0';
            }
        }
    }
    for(int i = 0; i < 4; i++){
        printf("\n%do nome: %s\n", i+1, c[i].nome);
        printf("Idade do(a) %s: %d\n",c[i].nome, c[i].idade);
        printf("Rua do %s: %s\n\n", c[i].nome, c[i].rua);
    }


    return 0;
}