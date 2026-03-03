#include <stdio.h>
int main() {
long long int c;
long long int maior = -2147483648; // -2147483648; Inicializa num com o menor valor possível para um int
//mas eu so preciso a partir de zero nesse exercicio

while (scanf("%lld",&c) != EOF){   //eof = end of file(input)
// A = SCANF() ... A != EOF
 if (c > maior){
 maior = c;
//} else{maior = maior; c = c;}
}

printf("%lld",maior);
return 0;
 }

