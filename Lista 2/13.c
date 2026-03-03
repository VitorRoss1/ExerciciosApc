#include <stdio.h>
int main () {

int localespaco = -1;
int localDoUltimoEspaco = -1; //def como -1 para nunca ser maior
char nome[100];
char nome1[100];
char ultimoNome[100];
scanf("%[^\n]",nome);//inclui espaços

//numero de caracteres
int contador = 0;
while(nome[contador] != '\0')
{
contador++;
}

//Achando os espaços
for (int j = 0 ; j < contador; j++)
{
 if(nome[j] == ' '){
localespaco = j;

 if (localespaco > localDoUltimoEspaco)
{
    localDoUltimoEspaco = localespaco;
}
}
}

//FIRST NAME
int i = 0;
while(nome[i] != ' ' && i < contador)
{
nome1[i] = nome[i];
i++;
}
nome1[i] = '\0'; //sinalizando o final da string nome1 manualmente [i+1]nao pois o ultimo i eh o q nao entrou no while

//LAST NAME
int a = 0;
for(int y = localDoUltimoEspaco + 1; y < contador; y++) //local +1 pois o 0 eh o espaço
{
    ultimoNome[a] = nome[y];
    a++;
}
ultimoNome[a] = '\0';

//printando
printf("%s.%s@unb.br\n",nome1,ultimoNome);


//if localespaço > localultimo lultimoespaço = localespaço/
// locallocaldoultimoespaço = x  ultimonome[localdoultimoespaço + j] j=0 j<numcaracteres
return 0;
}  