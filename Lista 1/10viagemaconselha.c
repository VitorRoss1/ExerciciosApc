#include <stdio.h>

int main() {
int Nrestaurantes,codigoRest,nota;
int nDia = 1;
int melhorcodigo;
int melhorNota;

//Loop de scaneamento de var
while(scanf("%d",&Nrestaurantes) != EOF){
    
//REinicializacao de variaveis
melhorNota = -1;//notas vao de zero a 5,entao -1 nunca vai ser maior,entao nunca vai ser vencedor, oq queremos ja q eh apenas um parametro
melhorcodigo = 10000000;//10^7 limite

//loop de comparaçao 
for (int i = 0; i < Nrestaurantes; i++){
    
scanf("%d", &codigoRest);
scanf("%d", &nota);

if(nota > melhorNota){
melhorNota = nota; 
melhorcodigo = codigoRest;
}
//desempate
else if(nota == melhorNota){
    if (codigoRest < melhorcodigo)
    {
    melhorcodigo = codigoRest;
    }
    }
}
printf("Dia %d\n", nDia);
printf("%d\n", melhorcodigo);
nDia++;
}
 return 0;
}

