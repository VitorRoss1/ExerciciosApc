#include <stdio.h>
int main() {

int nlinhas;

scanf("%d",&nlinhas);

//1 piramide

for(int i = 1; i <= nlinhas ; i++){ 

 for (int a = 1; a <= i ; a++){

 printf("%02d ",i);
    }

    printf("\n");
}

//2 piramide

printf("\n");//espaço

for(int i = 1; i <= nlinhas ; i++){ 

 for (int a = 1; a <= i; a++){
 printf("%02d ",a);
    }

    printf("\n");
}
     return 0;
 }