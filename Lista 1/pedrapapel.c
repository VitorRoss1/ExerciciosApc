#include <stdio.h>
int main(){

int jog1,jog2;
scanf("%d",&jog1);
scanf("%d",&jog2);

switch (jog1)
{
case 0: //pedra jog1
 switch (jog2){
 case 0: printf("empate"); break; 
 case 1: printf("B"); break;
 case 2: printf("A"); break;
 case 3: printf("A"); break;
 case 4: printf("B"); break;
 }
    break;

case 1: //papel
 switch (jog2){
 case 0: printf("A"); break; 
 case 1: printf("empate"); break;
 case 2: printf("B"); break;
 case 3: printf("B"); break;
 case 4: printf("A"); break;
 }
    break;

case 2: //tesoura
 switch (jog2){
 case 0: printf("B"); break;
 case 1: printf("A"); break;
 case 2: printf("empate"); break;
 case 3: printf("A"); break;
 case 4: printf("B"); break;
 }
    break;
   
case 3: //lagarto
 switch (jog2){
 case 0: printf("B"); break;
 case 1: printf("A"); break;
 case 2: printf("B"); break;
 case 3: printf("empate"); break;
 case 4: printf("A"); break;
 }
    break;
   
case 4: //spock
 switch (jog2){
 case 0: printf("A"); break;
 case 1: printf("B"); break;
 case 2: printf("A"); break;
 case 3: printf("B"); break;
 case 4: printf("empate"); break;
 }
    break;

}
return 0;
}