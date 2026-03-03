#include <stdio.h>
int main() {

unsigned long long int CPF ;
unsigned long long int D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11;//d11 sendo o ultimo digito da esq pra dir
unsigned long long int Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9,Q10;
unsigned int resto1,DV1,resto2,DV2; // digitos verificadores 

scanf("%llu", &CPF);

//EXTRAÇAO
//10 quocientes 
Q1 = CPF /10;
Q2 = Q1 /10;
Q3 = Q2 /10;
Q4 = Q3 /10;
Q5 = Q4 /10;
Q6 = Q5 /10;
Q7 = Q6 /10;
Q8 = Q7 /10; 
Q9 = Q8 /10;
Q10 = Q9/10; 

//11 restos(digitos)
D11 = CPF % 10; //dv1
D10 = Q1 % 10; //dv2
D9 = Q2 % 10;
D8 = Q3 % 10;
D7 = Q4 % 10;
D6 = Q5 % 10;
D5 = Q6 % 10;
D4 = Q7 % 10;
D3 = Q8 % 10;
D2 = Q9 % 10;
D1 = Q10 % 10;

//PRIMEIRO DV   (so vou usar do D1 ao D9; d10 e d11 sao os digitos verificadores)
resto1 = (D1*10 + D2*9 + D3*8 + D4*7 + D5*6 + D6*5 + D7*4 + D8*3 + D9*2) % 11 ;
DV1 = 11 - resto1;
 if (DV1 > 9){
     DV1 = 0;
 }
 
//SEGUNDO DV   (agora do D2 ao D10 e aumenta 1 na multiplicaçao de cada)
resto2 = (D1 * 11 + D2 * 10 + D3 * 9 + D4 * 8 + D5 * 7 + D6 * 6 + D7 * 5 + D8 * 4 + D9 * 3 + DV1 *2) % 11; //dv1 ao invez do d10
DV2 = 11 - resto2;
if (DV2 > 9){
    DV2 = 0;
 }

//verif final
if (D10 == DV1 && D11 == DV2 ) {
 printf("valido");}

else{
 printf("invalido"); }


return 0;
}