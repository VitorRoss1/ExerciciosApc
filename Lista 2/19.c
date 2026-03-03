#include <stdio.h>
int main () {

int n;
scanf("%d",&n);//sobra um '\n'
//ATE 1000 CARACTERES DE ENTRADA NAO BUFFEROVERFLOW
char vet[1000];

/*Consumo do \n Residual:
preciso consumir esse '\n' do scanf(enter) para que nao acabe sendo lido pelo prox scanf.
nesse  caso nao o "scanf("%[^\n]",vet);" scanearia nada pois a sobra do '\n' do enter do scanf(n) 
faria com que scanf("%[^\n]") parasse sem ler nada pois ja encontrou uma quebra de linha como primeiro caracter */

//para consumir esse '\n' do enter vamos usar o getchar();
getchar();

//loop das linhas
int i = 0;
while (i < n){

 scanf("%[^\n]",vet);//sacaneia tudo ate a quebra de linha
 getchar();       // Consome o '\n' após O enter
 //contando caracteres
 int contador = 0;
 while(vet[contador] != '\0')
 {
 contador++;
 }

//Conversoes criptografia
 for (int j = 0; j < contador; j++)
 {
    if (vet[j] >= 'A' && vet[j] <= 'M')
 { 
 vet[j] = vet[j] + 13;
 }
   else if(vet[j] >= 'N' && vet[j] <= 'Z')
 {
 vet[j] = vet[j] - 13;
 }
 }
 printf("%s\n",vet);
 i++;
}
return 0;
}  