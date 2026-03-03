#include <stdio.h>
int main () {

int n;
int menor = 1000000;
int terceiro_menor = 1000000;
int segundo_menor = 1000000;
scanf("%d",&n);
int vet[n];

//scaneando e atribuindo aos vetores
for (int i = 0; i < n; i++)
{
   scanf("%d",&vet[i]);
}

int indiceterceiromenor, indicesegundomenor,indicemenor ;

//extraindo os menore
for(int a = 0; a < n; a++)
{
  if(vet[a] < menor)
  { 
   terceiro_menor = segundo_menor;
   segundo_menor = menor;
   menor = vet[a];

indiceterceiromenor = indicesegundomenor;
indicesegundomenor = indicemenor;
indicemenor = a;

  }
  else if(vet[a] < segundo_menor){
    terceiro_menor = segundo_menor;
    segundo_menor = vet[a];

 indiceterceiromenor = indicesegundomenor;
    indicesegundomenor = a;
  }
  else if(vet[a] < terceiro_menor){
   terceiro_menor = vet[a];
   indiceterceiromenor = a;
  }
}
 printf("%d \n%d\n",segundo_menor,terceiro_menor);
 printf("%d %d %d",indicemenor,indicesegundomenor,indiceterceiromenor);
return 0;
}