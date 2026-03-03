#include <stdio.h>

struct tipoData
{
    int dia;
    int mes;
    int ano;
};// dtNascimento;

struct tipoPessoa
{
   char Nome[80];
   struct tipoData dtNascimento;//estruct aninhada
};//pessoa;

//LEMBRAR DE POR AS VAR EM ESCOPOS LOCAIS E BEM DEFINIDAS(STRUCT ... VAR)
struct tipoPessoa separaInfo(char nome[80],int dt_nascimento)
{
 struct tipoPessoa pessoa;//declaraçao d avr

pessoa.dtNascimento.ano = dt_nascimento/10000; 
pessoa.dtNascimento.mes = (dt_nascimento/100) - (pessoa.dtNascimento.ano * 100);
pessoa.dtNascimento.dia = dt_nascimento - (pessoa.dtNascimento.ano * 10000) - (pessoa.dtNascimento.mes * 100);
// jeito mlr   (dt_nascimento /100) %100 = mes
// dt_nascimento %100 = dia

int i = 0;
while ( nome[i] != '\0'&& i < 79)
{ 
   pessoa.Nome[i] = nome[i]; 
   i++;
}
 pessoa.Nome[i] = '\0'; //Finaliza string
return pessoa;
}
