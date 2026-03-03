#include <stdio.h>
int main () {

char vet[1000]; //valor max
scanf("%s", vet);

//contador de caracteres
int i = 0;
while (i < 1000 && vet[i] != '\0' )
{
i++; //nao conta o finalizador
}
printf("%d",i);


return 0;
}  