#include <stdio.h>

int main(){
    int cont = 1;
    int impares = 0;
    while(cont <= 30){
        cont++;
        if(cont % 2 != 0){
            impares++;
        }
    }
    printf("%d", impares);
}