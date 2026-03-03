#include <stdio.h>
int main () {

int n;
int menor = 1000000;
int indice;

scanf("%d",&n);
int vet[n];

//scaneando e atribuindo aos vetores
for (int i = 0; i < n; i++)
{
   scanf("%d",&vet[i]);
}

for(int a = 0; a < n; a++)
{
  if(vet[a] < menor)
  { 
   menor = vet[a];
   indice = a;
  }
}
 printf("%d\n",indice);

return 0;
}