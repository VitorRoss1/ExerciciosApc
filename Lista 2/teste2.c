#include <stdio.h>
int main () {

char vet[10];
scanf("%s",vet);
for (int i = 0; i < 10; i++)
{
     if (vet[i] >= 'A' && vet[i] <= 'Z')//se vet[i]esta entre as maiusculas
 {
    vet[i] = vet[i] + 32;//+32 maiuscula para minuscula ascii
 }
    printf("%d\n",vet[i]);//%d para imprimir o valor ascii
}




//after for ;nome1[i] = '\0'; // Finaliza a string
return 0;
}  