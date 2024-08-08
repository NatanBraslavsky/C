#include <stdio.h>
#include <string.h>

int main(void) {

  // char nome[10];
  // char nomes[3][10];

  // printf("Digite seu nome: ");
  // scanf("%s", nome);
  // printf("Seu nome e: %s", nome);

  // for(int i=0; i<3; i++){
  //   printf("Digite seu nome: ");
  //   scanf("%s", nomes[i]);
  // }
  // for(int i=0; i<3; i++){
  //   printf("\nNomes: %s", nomes[i]);
  // }



  
  // char nomes[3][20];
  // int tam=0, maiorTamanho=0;
  // int comp=0;
  // int njoels=0;
  // char copia[20];
  
  // for(int i=0; i<3; i++){
  //   printf("Qual o seu nome? ");
  //   scanf("%s", nomes[i]);
  //   tam=strlen(nomes[i]);
  //   comp=strcmp(nomes[i], "joel");
  //   if(comp==0){
  //     njoels++;
  //   }
  //   // strcpy(copia, "lauro");
  //   // printf("%s", copia);
  //   printf("\n%d", njoels);
  //   strcat(nomes[i],"br");
  //   printf("\n%s\n", nomes[i]);
  // }



  // char paises[3][20];
  // int tam = 0, maiorTam=0;
  // int comp = 0;
  // int qtdBrasil=0;
  // int idades[3];
  // int menorIdade = 0;
  // char paisNovo[20];

  // for(int i = 0; i<3; i++){
  //   printf("Digite o pais: ");
  //   scanf("%s", paises[i]);
  //   printf("Idade do pais: ");
  //   scanf("%d", &idades[i]);
    
  //   tam = strlen(paises[i]);
  //   if(tam > maiorTam){
  //     maiorTam = tam;
  //   }
  //   comp = strcmp(paises[i], "brasil");
  //   if(comp==0){
  //     qtdBrasil++;
  //   }

  //   if(idades[i] < menorIdade || menorIdade == 0){
  //     menorIdade = idades[i];
  //     strcpy(paisNovo, paises[i]);

  //     if(tam >= 5){
  //       strcat(paises[i], "Grande");
  //     }
  //     else{
  //       strcat(paises[i], "Pequeno");
  //     }
  //   }
  // }
  // printf("Tamanho: %d", maiorTam);
  // printf("\nQuantidades de brasil: %d", qtdBrasil);
  // printf("\nPais mais novo: %s", paisNovo);

  // for(int j=0; j<3; j++){
  //   printf("\nPaises: %s", paises[j]);
  // }



  // char nomes[3][20];
  // char sobrenomes[3][20];
  // char nomecompleto[40] = "";

  // for(int i = 0; i < 3; i++){
  //   printf("Digite o nome: ");
  //   scanf("%s", nomes[i]);
  //   printf("Digite seu sobrenome: ");
  //   scanf("%s", sobrenomes[i]);

  //   strcpy(nomecompleto, nomes[i]);
  //   strcat(nomecompleto, "-");
  //   strcat(nomecompleto, sobrenomes[i]);
  //   printf("Nome completo: %s\n", nomecompleto);
  // }




    //quest 1
  // char nome[20];

  // printf("Digite seu nome: ");
  // scanf("%s", nome);
  // for(int i = 0; i < 4; i++){
  //   printf("%c", nome[i]);
  // }



  
    //quest 2

  int tam=0;
  char nome[20];
  printf("Digite seu nome: ");
  scanf("%s", nome);
  tam = strlen(nome);
  printf("Qtd letras: %d", tam);
  // 



  //quest 3

  // char pais[20];
  // char copia[20];
  // int comp=0;
  

  // printf("Digite seu pais: ");
  // scanf("%s", pais);
  // comp=strcmp(pais, "brasil");
  // if(comp == 0){
  //   printf("Voce e brasileio(a)");
  // }
  // else{
  //   printf("Voce nao e brasileiro");
  // }




  //quest 4

  float altura[3], maiorAltura=0;
  char nomes[3][20];
  char maisAlta[20];

  for(int i = 0; i < 3; i++){
    printf("Digite sua altura: ");
    scanf("%f", &altura[i]);
    printf("Digite seu nome: ");
    scanf("%s", nomes[i]);
    if(altura[i] > maiorAltura){
      maiorAltura = altura[i];
      strcpy(maisAlta, nomes[i]);
    }
  }
  printf("Nome da pessoa mais alta: %s", maisAlta);
  


  
  return 0;
}