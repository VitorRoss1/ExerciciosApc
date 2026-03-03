#include <stdio.h>
#include <string.h>

int main() {
    char resposta[5];  
    int contvezes = 0; 
    int contSim = 0;  // Contador de sim DENTRO de um formulário
    int linha = 0;  // Contador de linhas lidas


    while (scanf("%s", resposta) != EOF) {
        if (strcmp(resposta, "sim") == 0) {
            contSim++;
        }
        linha++;

// A cada 10 respostas, verificamos o formulário
        if (linha == 10) {
            if (contSim >= 2) {
                contvezes++;
            }
// Reset
    contSim = 0;
    linha = 0;
    }
    }

    printf("%d\n", contvezes);

    return 0;
}


