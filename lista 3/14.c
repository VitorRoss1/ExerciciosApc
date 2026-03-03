#include <stdio.h>

int main(){

int linhas;
int a = 1;
scanf("%d",&linhas);
int c = 1;

for (int i = 0; i < linhas; i++)
{
 for (int j = linhas - c; j > 0 ; j--)
    {  
        printf(" ");
    }
   c++;
    for (int b = 0; b < a ; b++)
    { 
        printf("*");  
    }
    printf("\n");
    a += 2;
}

    return 0;
}