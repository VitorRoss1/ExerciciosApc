#include <stdio.h>
int main () {
//5 =< n <= 10000
int n,numTeste;
int contador = 0;
scanf("%d",&n);
int vet[n];

//scaneando e atribuindo aos vetores
for (int i = 0; i < n; i++)
{
   scanf("%d",&vet[i]);
}
//
scanf("%d",&numTeste);

//
for (int i = 0; i < n; i++)
{
if (vet[i] == numTeste)
{
contador++;
}
}

if (contador == 0)
{
  printf("nao pertence");
}
else{printf("pertence");}
return 0;
}  