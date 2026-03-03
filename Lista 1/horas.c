#include <stdio.h>
int main() {
long long int horas;
long long unsigned int minutos;
long long unsigned int segundos;

scanf("%lld",&horas);

minutos = (horas * 60);
segundos = (minutos * 60);
printf("%llu\n",minutos);
printf("%llu\n",segundos);

return 0;

}
