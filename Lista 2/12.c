#include <stdio.h>
int main () {

int numDStrings;
int numCaracteres = 0;
scanf("%d",&numDStrings);
char string[1000];


for (int j = 0; j < numDStrings; j++)
{

//scanf("%[^\n]",string);
scanf("%s",string);

//numero de caracteres
int contador = 0;
while(string[contador] != '\0')
{
contador++;
}
//qual maior numero de caracteres
if (contador > numCaracteres)
{
    numCaracteres = contador;
}
}

printf("%d",numCaracteres);

return 0;
}  