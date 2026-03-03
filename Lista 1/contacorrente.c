#include <stdio.h>
int main() {

//divido os quocientes por 10 e os restos vao sendo os digitos em ordem decrescente

int cc;
int d1,d2,d3,d4,d5,d6; //digitos(restos da divisao por 10)
int q1,q2,q3,q4,q5; //quocientes ...

scanf("%d",&cc);
 
 //IF
 //quocientes (quociente 1 2x 3x )
 q1 = cc/10; //10
 q2 = q1/10; //1
 q3 = q2/10; //0
 q4 = q3/10;
 q5 = q4/10;

//restos (digitos em si)
//se cc = 000100
 d6 = cc % 10; //0
 d5 = q1 % 10; //0
 d4 = q2 % 10; //1
 d3 = q3 % 10; 
 d2 = q4 % 10; 
 d1 = q5 % 10;

 int parte1,parte2,dig_verif;

 parte1= ((d1*7) + (d2*6) + (d3*5) + (d4*4) + (d5*3) +(d6*2)); 
 parte2 = parte1 % 11;
 dig_verif = 11 - parte2;

 printf("%d\n",dig_verif);

return 0;
}