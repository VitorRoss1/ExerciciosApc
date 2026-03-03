#include <stdio.h>
int main () {

int numStrings;
scanf("%d",&numStrings);

char vet[1000]; //valor max

for(int i = 0; i< numStrings;i++)
{
scanf("%s", vet);
}

//contador de caracteres
int i = 0;
while (i < 1000 && vet[i] != '\0' )
{//nao conta o finalizador
i++; 
}
printf("%d\n",i);


return 0;
}  