#include <stdio.h>
int main() {

    char original[10002];
    char base[42];
    char troca[42];
    char textoNovo[10042];

    scanf("%[^\n]", original);
    getchar(); // para limpar o '\n' do enter
    scanf("%s", base);
    scanf("%s", troca);

    // TAMANHOS
    int contadoror = 0;
    while (original[contadoror] != '\0') 
        contadoror++;

    int contadorbase = 0;
    while (base[contadorbase] != '\0')
        contadorbase++;

    int contadortroca = 0;
    while (troca[contadortroca] != '\0')
        contadortroca++;

    // VARIÁVEIS
    int numIguais = 0;
    int i = 0, InicioIndice = -1;
    int p = 0, b = 0, z = 0;
    int encontrouBase = 0; // Marca se a base foi encontrada

    for (; original[p] != '\0'; p++) {
        // Verifica a palavra (no início ou após um espaço)
        if (original[p] == base[0] && 
           (p == 0 || original[p - 1] == ' ')) {
            numIguais = 0;
            for (i = 0; base[i] != '\0' && original[p + i] == base[i]; i++) {
                numIguais++;
            }

            // Verifica se é uma palavra completa
            if (numIguais == contadorbase && 
               (original[p + numIguais] == ' ' || original[p + numIguais] == '\0')) {
                encontrouBase = 1; // Marca que encontrou a base

                // Antes da substituição
                for (int a = 0; a < p; a++) {
                    textoNovo[z++] = original[a];
                }

                // Substituição
                for (int j = 0; j < contadortroca; j++) {
                    textoNovo[z++] = troca[j];
                }

                p += contadorbase - 1; // Pula a palavra base
                continue;
            }
        }

        // Copia os outros caracteres
        textoNovo[z++] = original[p];
    }

    textoNovo[z] = '\0'; // Finaliza o novo texto

    // Se a base não foi encontrada, copia o texto original
    if (!encontrouBase) {
        for (int a = 0; a <= contadoror; a++) {
            textoNovo[a] = original[a];
        }
    }

    printf("%s", textoNovo);

    return 0;
}