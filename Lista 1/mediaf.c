#include <stdio.h>
int main () {

float p1,p2,p3;//0 a 10 provas
float t;       //0 a 10 trabalho
float l1,l2,l3,l4,l5; //0 a 1 listas

scanf ("%f", &p1 );
scanf ("%f", &p2 );
scanf ("%f", &p3);

scanf("%f", &t);

scanf ("%f",&l1);
scanf ("%f",&l2);
scanf ("%f",&l3);
scanf ("%f",&l4);
scanf ("%f",&l5);

float ml = (l1+l2+l3+l4+l5) /10;
float mf = (p1 + 2*p2 + 3*p3 + 2*t)/8 +ml;

printf("%.2f",mf); //duas casas dec de aprox no float
return 0;

}