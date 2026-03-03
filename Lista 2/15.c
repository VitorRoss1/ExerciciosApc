#include <stdio.h>
int main () {
char vet[100];
int numOs = 0;

while(scanf("%s",vet) != EOF)
{

int contador = 0;
while(vet[contador] != '\0')
{
contador++;
}

for (int j = 0 ; j < contador; j++)
{
if (vet[j] == 'o')
{
    numOs++;
}
}
}
printf("%d",numOs);
return 0;
}  