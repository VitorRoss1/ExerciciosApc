#include <stdio.h>
#include <math.h>

int encaixa(int a, int b) {
    int tamanhoB = 0, tamanhoA = 0;
    int tempB = b, tempA = a;
//conta digitos
    if (b == 0) tamanhoB = 1;
    while (tempB > 0) {
        tempB /= 10;
        tamanhoB++;
    }

    if (a == 0) tamanhoA = 1;
    while (tempA > 0) {
        tempA /= 10;
        tamanhoA++;
    }

    if (tamanhoA < tamanhoB) {
        return 0;
    }

    int ultimosDigitos = a % (int)pow(10, tamanhoB);

    if (ultimosDigitos == b) {
        return 1;
    } else {
        return 0;
    }
}


int segmento(int a, int b) {
    int tamanhoA = 0, tamanhoB = 0;
    int tempA = a, tempB = b;
    int maior, menor, tamMaior, tamMenor;

    if (a == 0) tamanhoA = 1;
    while (tempA > 0) {
        tempA /= 10;
        tamanhoA++;
    }
    if (b == 0) tamanhoB = 1;
    while (tempB > 0) {
        tempB /= 10;
        tamanhoB++;
    }
/////
    if (tamanhoA >= tamanhoB) {
        maior = a;
        menor = b;
        tamMaior = tamanhoA;
        tamMenor = tamanhoB;
    } else {
        maior = b;
        menor = a;
        tamMaior = tamanhoB;
        tamMenor = tamanhoA;
    }

    // Percorre o número maior, buscando segmentos do tamanho do menor
    for (int i = 0; i <= tamMaior - tamMenor; i++) {
        int segmentoAtual = maior % (int)pow(10, tamMenor);  //expo 10^tam - i i comeca em 1
        if (segmentoAtual == menor) {
            return 1;  // Encontrou segmento
        }
        maior /= 10;  //Remove um digito da direita 
    }

    return 0;  // Não encontrou
}


