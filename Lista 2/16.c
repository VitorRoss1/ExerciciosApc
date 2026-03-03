#include <stdio.h>
int main () {

char str[60];
char strVogal[60];
char strVogalInv[60];

scanf("%s",str);

//(1)numero de caracteres str
int contador = 0;
while(str[contador] != '\0')
{
contador++;
}

//(2)vogais para string vogal
int a = 0;
for (int i = 0; i < contador; i++)
 {

 if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
 { 
  //if nao while pois while daria um loop infinito se fosse verdadeiro e i nao incrementaria
 strVogal[a] = str[i];
 a++;
 }
}
 //sinalizando o final da string manualmente [a+1]nao pois o ultimo a nao entrou no while
 strVogal[a] = '\0';
 

//(3)numero de caracteres strVogal
int contadorVogal = 0;
while (strVogal[contadorVogal] != '\0')
{
    contadorVogal++;
}
//(3.1)se nao houver vogais
if (contadorVogal == 0) {
    printf("Valor invalido!\n");
    return 0;
}

//(4)Invertendo stringVogal 

 for (int i =0 ; i < contadorVogal ; i++)
 {
 strVogalInv[i] = strVogal[contadorVogal - i - 1];
 }
 strVogalInv[contadorVogal] = '\0';


//(5)Verificando se lido das duas maneiras sao iguais
int contar = 0;
for (int y = 0; y < contadorVogal; y++)
{
if (strVogal[y] == strVogalInv[y] )
{  
  //if nao while pois while daria um loop infinito se fosse verdadeiro e i nao incrementaria
    contar++;
}
}


//(6)Printando
if (contar == contadorVogal)
{
    printf("S\n");
}
else
{
    printf("N\n");
}

return 0;
}
