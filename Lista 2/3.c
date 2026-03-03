#include <stdio.h>
int main () {
//5 =< n <= 10000
int n;
int contadorDePar = 10000;
int contadorDeImpar = 10000;
int pares[contadorDePar];
int impares[contadorDeImpar];

scanf("%d",&n);
int vet[n];

//scaneando e atribuindo aos vetores
for (int i = 0; i < n; i++)
{
   scanf("%d",&vet[i]);
}

//par ou impar
int indicePar = 0; 
int indiceImpar = 0;
for(int i = 0; i < n; i++)
{ 
  if(vet[i] % 2 == 0)
  { 
   pares[indicePar] = vet[i];
   indicePar++;
   contadorDePar++;
  }
  else{
  impares[indiceImpar] = vet[i];
  indiceImpar++;
  contadorDeImpar++;
  }
}

//removendo o valor inicial dos contadores
contadorDePar = contadorDePar - 10000;
contadorDeImpar = contadorDeImpar - 10000;

//printando
for (int i = 0; i < contadorDePar ; i++)
{
    printf("%d ",pares[i]);
     
}
printf("\n");
for (int i = 0; i < contadorDeImpar ; i++)
{
    printf("%d ",impares[i]);
}
return 0;
}