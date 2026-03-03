#include <stdio.h>
int main () {
//5 =< n <= 10000
int n;
int contadorDePar = 10000;
int contadorDeImpar = 10000;
//n vai de 10 a 100000. valor maximo para sempre caber termos nesse array dps -10000
int indicedoPar = 0; 
int indicedoImpar = 0;


scanf("%d",&n);
int vet[n];

int indicesPares[contadorDePar];
int indicesImpares[contadorDeImpar];

//scaneando e atribuindo aos vetores
for (int i = 0; i < n; i++)
{
   scanf("%d",&vet[i]);
}

//par ou impar
for(int i = 0; i < n; i++)
{ 
  if(vet[i] % 2 == 0)
  { 
   indicesPares[indicedoPar] = i;
   contadorDePar++;
   indicedoPar++;
  }
  else{
   indicesImpares[indicedoImpar] = i;
   contadorDeImpar++;
   indicedoImpar++;
  }
}

//removendo o valor inicial dos contadores
contadorDePar = contadorDePar - 10000;
contadorDeImpar = contadorDeImpar - 10000;

//printando
for (int i = 0; i < contadorDePar ; i++)
{
    printf("%d ",indicesPares[i]);
     
}
printf("\n");

for (int i = 0; i < contadorDeImpar ; i++)
{
    printf("%d ",indicesImpares[i]);
}
return 0;
}