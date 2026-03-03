#include <stdio.h>
int main () {
//5 =< n <= 10000
int n,soma;

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

//printando soma
for (int i = 0; i < n; i++)
{
soma = vet2[i] + vet[i];
printf("%d ",soma);
}

return 0;
}  