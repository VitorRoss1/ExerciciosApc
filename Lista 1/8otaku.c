#include <stdio.h>
int main() {

int linhas,colunas;

scanf("%d %d",&linhas,&colunas);


//[000,000][000,001][y,x]
 for (int y = 0; y < linhas ; y++){

  for (int x = 0; x < colunas ; x++){

 printf("[%03d , %03d] ",y,x);

    }

    printf("\n");
 }
   return 0;
 }