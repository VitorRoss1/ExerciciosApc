#include <stdio.h>
int main(){

int parOuImpar1,parOuImpar2,parOuImpar3;
int A,B,C,D;
int F1,F2;//final jogador 1 e 2
char V1,V2,vencedor; //abcd de 0 a 10

scanf("%d",&parOuImpar1); //0 ou 1
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&parOuImpar2);
scanf("%d",&C);
scanf("%d",&D);
scanf("%d",&parOuImpar3);
scanf("%d",&F1);
scanf("%d",&F2);


//jogo1
if (parOuImpar1 == 0) //A  par 
{
   if ((A + B)% 2) //verdadeiro se tiver resto .: impar
 {
 V1 = 'B';//66;"B";
   }
   else{
 V1 = 'A';//65;"A";
   }
}
else  //(parOuImpar == 1) //A  impar 
{
   if ((A + B)% 2) //verdadeiro se tiver resto .: impar
 {
 V1 = 'A';//65;"A";
   }
   else{
 V1 = 'B';//66;"B";
   }
}



//jogo2
if (parOuImpar2 == 0) //C  par 
{
   if ((C + D)% 2) //verdadeiro se tiver resto .: impar
 {
 V2 = 'D';//68;"D";
   }
   else{
 V2 = 'C';//67;"C";
   }
}
else  //(parOuImpar2 == 1) //C  impar 
{
   if ((C + D)% 2) //verdadeiro se tiver resto .: impar
 {
 V2 = 'C';//67;"C";
   }
   else{
 V2 = 'D';//68;"D";
   }
}


 //final
if (parOuImpar3 == 0) //V1 par
 {
   if ((F1 + F2)%2) //se tiver resto(impar) retornara verdadeiro
   {
   vencedor = V2;
   }
   else{
   vencedor = V1;
   }
 }
else //(parOuImpar3 == 1) //V1 impar
 {
 if ((F1 + F2)%2) //se tiver resto(impar) retornara verdadeiro
   {
   vencedor = V1;
   }
   else{
   vencedor = V2;
   }
 }

 printf("%c\n",vencedor);

return 0;
}