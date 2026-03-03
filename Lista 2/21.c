#include <stdio.h>

int comparar_strings(char *a, char *b) {
    // Função que compara duas strings, retornando 0 se forem iguais
    while (*a != '\0' && *b != '\0') {
        if (*a != *b) {
            return 1;  // Retorna 1 se as strings forem diferentes
        }
        a++;
        b++;
    }
    // Se ambas as strings terminarem juntas, elas são iguais
    return (*a == *b) ? 0 : 1;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);  // Lê o número de palavras nas sequências S e P

    char S[1000][81];  // Vetor para armazenar as palavras de S
    char P[1000][81];  // Vetor para armazenar as palavras de P

    // Lê as palavras da sequência S
    for (int i = 0; i < N; i++) {
        scanf("%s", S[i]);
    }

    // Lê as palavras da sequência P
    for (int i = 0; i < M; i++) {
        scanf("%s", P[i]);
    }

    // Verifica se alguma palavra de P existe em S
    int existe = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (comparar_strings(P[i], S[j]) == 0) {
                existe = 1;
                break;
            }
        }
        if (existe) {
            break;
        }
    }

    // Exibe a resposta
    printf("%d\n", existe);

    return 0;
}
