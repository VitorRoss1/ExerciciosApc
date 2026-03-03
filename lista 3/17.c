#include <stdio.h>
#include <math.h>
int encaixa(int a,int b){


//conta n de casas A
int tamanhoB;
    if (b == 0) {
        tamanhoB = 1;
    }
    while (b > 0) {
        b /= 10;  // c = c/10
        tamanhoB++;  
    }
//conta n de casas B
int tamanhoA;

    if (a == 0) {
        tamanhoA = 1;
    }
    while (a > 0) {
        a /= 10;  // c = c/10
        tamanhoA++;  
    }


//
if (tamanhoA < tamanhoB){ return 0;}
//
else if (tamanhoA == tamanhoB){
   if (b - a == 0){
    return 1;
}
else{ return 0;}
}
//
else if (tamanhoA > tamanhoB){ 
b = b % (10*tamanhoB );
if (b - a == 0){
    return 1;
}
else{ return 0;}
}
}

/*
int main(){
int a = encaixa(567890,890);
printf("%d",a);
a = encaixa(2457,245);
printf("%d",a);
}
*/
////////////////////////////////////////
int segmento(int a,int b) {
int tamanhoA1 =0 , tamanhoB1 =0;
int A,B;
int tamA,tamB;
int ver = 0, result = 0;

//TAMANHO A
    if (a == 0) {
        tamanhoA1 = 1;
    }
    while (a > 0) {
        a /= 10;  // c = c/10
        tamanhoA1++;  
    }
// TAMANHO B
    if (b == 0) {
       tamanhoB1 = 1;
    }
    while (b > 0) {
        b /= 10;  // c = c/10
        tamanhoB1++;  
    }

//b ser sempre o menor
if (tamanhoA1 < tamanhoB1)
{
    A = b;
    B = a;
 tamA = tamanhoB1;
 tamB = tamanhoA1;
}

//verificaçoes

int i = 1;
double base = 10, expoente = tamA - i;
for (int j = ; j < count; j++)
{
    /* code */
}

for (; i <= tamA; i++)
{
 result = pow(base,expoente)

A%result 





} 