#include <stdio.h>
int main () {

//buffer overflow se str >4 caracteres
char str[5];
//pega 4 
fgets(str,5,stdin); //4+ '\0'
printf("%s\n", str);
//pega mais 4
fgets(str,5,stdin); //4+ '\0' vai recuperar +4 das q sobraram do primerio fgets 
printf("%s", str);  //fgets adiciona \0 e \n
return 0;
}  