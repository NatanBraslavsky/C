// #include <stdio.h>

// int main(void) {

//   int numeros[3][3]; 
//   for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//       printf("Digite um numero: ");
//       scanf("%d", &numeros[i][j]);
      
//     }
//   }
//   for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//       printf("[%d]", numeros[i][j]);
//     }
//     printf("\n");
//   }
  
//   return 0;
// }





// #include <stdio.h>

// int main(){

//     float matriz[2][5], soma=0;
//     float media=0;

//     for(int i=0; i<2; i++){
//       for(int j=0; j<5; j++){
//         printf("Digite um numero: ");
//         scanf("%f", &matriz[i][j]);
//         soma+=matriz[i][j];
//       }
//     }
//     media=soma/10;
//     printf("Media: %.2f\n", media);
//     printf("Numeros acima da media: \n");
//     for(int i=0; i<2; i++){
//       for(int j=0; j<5; j++){
//         if(matriz[i][j] > media){
//           printf("%.2f ", matriz[i][j]);
//         }
//       }
//     }
//   return 0;
// }






// um print a cada loop

#include <stdio.h>

int main(){

  for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
    
      if(j % 2 == 0){
        if(i != 2){
          printf("_");
        }
        else{
          printf(" ");
        }
      }
      else{
        printf("|");
      }
      
    } 
    printf("\n");
  }
      
     

  return 0;
}


