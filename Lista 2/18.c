#include <stdio.h>
int main () {

char original[10002];
char base[42];
char troca[42];
char textoNovo[10042];

scanf("%[^\n]",original);
getchar();//para LIMPAR o '\n' do enter da entrada
scanf("%s",base);
scanf("%s",troca);

//TAMANHOS
int contadoror = 0;
while (original[contadoror] != '\0') //conta os espaços''
{
   contadoror++;
}
int contadorbase = 0;
while (base[contadorbase] != '\0')
{
   contadorbase++;
}
int contadortroca = 0;
while (troca[contadortroca] != '\0')
{
   contadortroca++;
}


//
int numIguais = 0;
int i = 0;
int InicioIndice = -1;
int p = 0;
int b = 0;
int z = 0;

for (; original[p] != '\0'; p++)
{

//primeira palvara
 if (original[p] == base[0]){
  for (int j = 0;base[j] != '\0'; j++)
   {
      while (original[p + i] == base[j])
      {
       numIguais++;
       i++;
       InicioIndice = p ;
      }
   }
 }

 //palavra dps do espaço
 else if (original[p]==' ')
 {
   for (int j = 0;base[j] != '\0'; j++)
   {
      while (original[p + i + 1] == base[j])//+1 para pular o espaço
      {
       numIguais++;
       i++;
       InicioIndice = p + 1;
      }
   }
 }


//VERIFICA SE A PALAVRA FOi encontrada
if (numIguais == contadorbase)
{

 //antes da substituiçao
 for(int a = 0; a < InicioIndice;a++)
 {
  textoNovo[a] = original[a];
 }
 //substituiçao
   for (; z < contadortroca;z++)
   {
      textoNovo[InicioIndice + z] = troca[z]; 

   }
 //apos a substituicao
 int contadorresto = contadoror - z;
   for(; original[InicioIndice + contadorbase + b] != '\0' && b < contadorresto + 1 ;b++ )
   {
    textoNovo[InicioIndice + z + b ] = original[InicioIndice + contadorbase + b ];//+1 pois ja copiei o espaço na subst
   }
}
numIguais = 0;// Reseta o número de iguais para a próxima palavra
}
textoNovo[InicioIndice + z + b ] = '\0';

printf("%s", textoNovo);

return 0;
}  