#include <stdio.h>
int main () {

int contador = 0;
long long int i;


while(scanf("%lld",&i) != EOF)
{
contador++;
}
printf("%lld",contador);
return 0;

}  