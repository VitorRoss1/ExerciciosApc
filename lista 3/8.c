#include <stdio.h>

struct tipoFiliacao 
{
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
} a;

struct tipoFiliacao separaLinhaCSV(char linha [240]){
    //var local para ser resetada a cada uso da funçao
    int contadornome = 0, contadornomemae = 0, contadorpai = 0;
 //nome
    while (linha[contadornome] != ',' && linha[contadornome] != '\0')
    {
    a.nome[contadornome] = linha[contadornome];
    contadornome++;
    }
 a.nome[contadornome] = '\0';//finaliza a string

 if (linha[contadornome] == ',') contadornome++; // Pula a virgula dps do 1ro nome
 //mae
    while (linha[contadornome+contadornomemae] != ',' && linha[contadornome+contadornomemae] != '\0')
    {
    a.nomeMae[contadornomemae] = linha[contadornome+contadornomemae];
    contadornomemae++;
    }
   a.nomeMae[contadornomemae] = '\0';

 if (linha[contadornome + contadornomemae] == ',')contadornome++; // Pula a virgula dps do seg nome
 //pai
  while (linha[contadorpai+contadornome+contadornomemae] != '\0')
    {
    a.nomePai[contadorpai] = linha[contadorpai+contadornome+contadornomemae];
    contadorpai++;
    }
   a.nomePai[contadorpai] = '\0';

    return a ;
}