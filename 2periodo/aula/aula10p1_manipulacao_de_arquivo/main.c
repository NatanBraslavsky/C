#include <stdio.h>
#include <string.h>

int main(){

    FILE *arquivo;
    arquivo = fopen("teste.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }
    char palavraLida[50];
    while(fgets(palavraLida, 50, arquivo) != NULL){
        printf("%s", palavraLida);
    }
    fclose(arquivo);
    return 0;
}