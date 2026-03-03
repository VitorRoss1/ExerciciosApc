#include <stdio.h>
int main () {
//5 =< n <= 10000
int n;
int contador = 0;

scanf("%d",&n);
int vet[n];
int vet2[n];

//scaneando e atribuindo aos vetores
for (int i = 0; i < n; i++)
{
   scanf("%d",&vet[i]);
}

for (int i = 0; i < n; i++)
{
   scanf("%d",&vet2[i]);
}

//
for (int i = 0; i < n; i++)
{
if(vet2[i] != vet[i])
contador++;
}
//printando soma
if (contador == 0)
{
   printf("sim");
}
else{printf("nao");}

return 0;
}  