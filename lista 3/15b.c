#include <stdio.h>

int main() {
    char letra;
    char str[1000];

    scanf("%c", &letra);
    getchar(); //consome o enter /n 
    scanf("%[^\n]", str);
    getchar(); 

    double nPalavra = 0.0;
    double nPletra = 0.0;

    int dentro = 0;   // Flag  detecta palavras
    int contemLetra = 0; // Flag  detectar contém a letra

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            
         if (dentro) {
                nPalavra++;
         if (contemLetra) {
                    nPletra++;
                }
                contemLetra = 0; // Reset
                dentro = 0;
            }
        } else {
            dentro = 1; //dentro de uma palavra
        if (str[i] == letra) {
                contemLetra = 1;
            }
        }
    }
    //caso não termine com espaco
    if (dentro) {
        nPalavra++;
        if (contemLetra) {
            nPletra++;
        }
    }
    double p = (nPalavra > 0) ? (nPletra / nPalavra) * 100.0 : 0.0;
    printf("%.1f\n", p);

    return 0;
}

