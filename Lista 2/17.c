#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
char palavra[43]; //42+\0

for (int i = 0; i < n; i++)
 {
 int erros = 0;//declarada dentro do loop para zerar a cada palavra analisada
 scanf("%s",palavra);
 
 //numero de caracteres str
 int contador = 0;
 while(palavra[contador] != '\0')
 {
 contador++;
 }

 //letra maiuscula para minuscula
 for (int a = 0; a < contador; a++)
 {
 if (palavra[a] >= 'A' && palavra[a] <= 'Z')
 {
   //MAIUSCULA + 32 = MINUSCULA ASCII
    palavra[a] = palavra[a] + 32;
 }
 }

 //verificando com o numero seguinte/ contador-1 pois o 49 compara com o 50 e o 50 com nenhum

 for (int i = 0; i < contador - 1; i++)
 {
 if(palavra[i] >= palavra[i + 1]){
 erros = 1509;
 break;//se encontrar um erro ja para o for 
 }
 }

  //printando
 if(erros == 0)
 {
  printf("%s: O\n",palavra);  
 }
 else
 {
   printf("%s: N\n",palavra);
 }
 }
 return 0;
 }


