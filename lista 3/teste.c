#include <stdio.h>
struct alunos
{
    char nome[100]; //string
    int notas[3]; //array 1d 
    int matricula;
};

int main(){

struct alunos vitorR; 
scanf("%[^\n] %d",&vitorR.nome, &vitorR.matricula);

printf("nome do aluno %s, matricula %d \n",vitorR.nome, vitorR.matricula);
//MLR FORMA DE DECLARAR STRUCT
struct alunos vitorC = {
   .nome = "vitorC",
   .matricula = 2420,
   .notas = {10.0,10.0,10.0} };

   printf("nome do aluno %s, matricula %d",vitorC.nome, vitorC.matricula);
return 0;
//alunoo = struct alunos
typedef struct alunos alunoo; //alunoo substitui tudo atraz e agr so preciso dele para chamar o struct e criar variaveis
alunoo legalidade;
printf("%d",legalidade);
}

