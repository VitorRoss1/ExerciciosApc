#include <stdio.h>
int main() {
int num,numTestes,numanterior;
scanf("%d",&numTestes);

//loop numero de testes
for (int i = 0; i < numTestes; i++){ 
scanf("%d",&num);

numanterior = num;
//loop da verificaçao(sucessivas verif ate numanterior inteiro ser 0 )
int verificador2 = 0;
 while(numanterior != 0){
int verificador = 0;
if(numanterior <= 1){verificador2++;}
else if(numanterior == 2){verificador2 = 0;} 
//verificaçao prima
//nao primo = verificador + 1;  primo verificador=0
 for(int i = 2; i < numanterior ;i++) {
//i < num pois assim eu ja excluo o caso do numero ser divisivel por ele msm; i = 2 começa no dois pois asssim eu excluo o caso do numero ser divisivel por 1
 if(numanterior % i == 0){verificador2++;}//nao else if pois esse if eh o primeiro no escopo do loop
 if (verificador2 >= 1 ){break;}
//assim qualquer divisao com resto zero sera o terceiro divisor, fzndo-o n nao primo
}
numanterior = numanterior/10; //numanterior para div sucessivas
verificador2 = verificador;
}

if (verificador2 == 0) {printf("S\n");}
 else if (verificador2 >= 1) {printf("N\n");}

}//loop ntestes

return 0; 
}

