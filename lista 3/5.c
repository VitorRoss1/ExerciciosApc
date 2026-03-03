#include <stdio.h>
//RADAR
double calculaVelocidadeMedia(int tA, int tB,double distancia){

double tempo = (tB - tA)/3600.0; //.0 PARA FUNCIONAR BEM COMO DOUBLE JA Q TA E TB SAO INT

/* Como tB e tA são inteiros, (tB - tA) / 3600 será feito usando 
divisão inteira,o que pode resultar em 0 na maioria dos casos,
levando a um  erro de divisão por zero ao calcular velMed. */

double velMed = distancia/tempo;
//VEL MED E DISTANCIA SAO DOUBLE ENTAO TEMPO TBM TEM Q SER PARA NAO PERDER PRECISAO E EVITAR DIV POR 0.
    return velMed;
}

int levouMulta(int tA, int tB,double distancia, double velocidadeMaxima){

double vel = calculaVelocidadeMedia(tA,tB,distancia);
if (vel > velocidadeMaxima)
{
    return 1;
}
else{return 0;}
}
