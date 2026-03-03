#include <stdio.h>

void swap( int *a, int *b){

//intermedio
int pointerB = *b ;
int pointerA = *a;

*a = pointerB; //valor da variavel q o ponteiro guarda o endereço
*b = pointerA;
}