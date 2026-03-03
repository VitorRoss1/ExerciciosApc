#include <stdio.h>

int main(){
char letra;
char str[1000];
scanf("%c",&letra);
getchar();//consome o enter /n
scanf("%[^\n]",str); // = &str[0]//capturar espaços para poder contar palavras
getchar();//consome o enter /n

//contador de palavras
double nPalavra = 1.0;
double nPletra = 0.0;
for (int i = 0; i < 1000 ; i++)
{
    while (str[i]== ' ' && str[i] != '\0')
    {
    nPalavra++;
    i++;
    }

//contador de palavras c letra x
while (str[i] == letra && str[i] != ' ')
{
   nPletra++;
}

}

//porcentagem 
double p = (nPletra/nPalavra) * 100;
printf("%.1f",p);


return 0;
}
