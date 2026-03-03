#include <stdio.h>
int main () {
int n;
long long int media = 0;
long long int soma = 0;
int contador = 0;

scanf("%d",&n);
long long int numeros[n];


for(int i = 0; i< n; i++){
scanf("%lld",&numeros[i]);
}
//somando
for(int i = 0; i< n; i++){

soma = numeros[i] + soma;
}
media = soma / n;

//printando
for (int i = 0; i < n; i++)
{
if( numeros[i] > media){
printf("%lld ",numeros[i]);
contador++;
}
}

if (contador == 0)
{
   printf("0");
}

return 0;
}  