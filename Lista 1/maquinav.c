#include <stdio.h>
int main() {

int P,V,T; //P = preço do produto, V = valor dado a maqn, T = troco

scanf("%d %d",&P,&V);

T = V - P;

int r500,r100,r50,r10,r5;

//restos(para calc )
r500 = T % 500; //43
r100 = r500 % 100; //43
r50 = r100 % 50; //43
r10 = r50 % 10; //3
r5 = r10 % 5; //3


//quocientes(num de moedas)
int m500,m100,m50,m10,m5,m1;
m500 = T / 500; //0
m100 = r500 / 100; //0
m50 = r100/ 50; //0
m10 = r50 / 10; //4
m5 = r10 / 5; //0
m1 = r5  ; //3


printf("%d\n",m500); //MOEDAS DE 500
printf("%d\n",m100);//100
printf("%d\n",m50);//50
printf("%d\n",m10); //10
printf("%d\n",m5); //5
printf("%d\n",m1); //1

}

/*if (P >= 0 && P <= 1000000 && V >= P && V >= 0 && V <= 1000000 ){
}
else  {
    printf("INVALIDO \n");
}
*/