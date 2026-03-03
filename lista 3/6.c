#include <stdio.h>

int contarEstrelas(int qtd,int abertura){
 int qtdPossivel = 0;
 int fluxoFotons;
 //scanf("%d",&qtd); PARAMETRO (JA DEVERIA TER)

 for (int i = 0; i < qtd; i++)
 {
    scanf("%d",&fluxoFotons);
 fluxoFotons *= abertura;

   if (fluxoFotons >= 40000000)
   {
    qtdPossivel++;
   }
 }
    return qtdPossivel;
}