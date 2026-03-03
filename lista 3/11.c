#include <stdio.h>

struct tipoLogradouro
{
char tipo[80];
char nome[80];
char complemento[80];
};

struct tipoLogradouro info = {"quadra","sqnw","310"};
char linha[240];

//funcao q altera linha[]
void  criaLinhaCSV(struct tipoLogradouro info, char linha[240]){

int i=0;
while (info.tipo[i] != '\0' && info.tipo[i] != ';' )
{
linha[i] = info.tipo[i];
i++;
}
linha[i] = ';'; i++;//incrementar dps do ; para nao comerem o ;


int j=0;
while (info.nome[j] != '\0' && info.nome[j] != ';' )
{
linha[i+j] = info.nome[j];
j++;
}
linha[i+j] = ';'; i++; 

int n=0;
while (info.complemento[n] != '\0')
{
linha[i+j+n] = info.complemento[n];
n++;
}
linha[i+j+n] = '\0';

}
