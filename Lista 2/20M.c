#include <stdio.h>
int main () {
int i,j;

//i(fileira x AT) j(coluna Y 125)
scanf("%d",&i);
scanf("%d",&j);

//[linhasY +1linha d cabeçalho] [colunasX +1coluna d cabeçalho] [TamanhoString(dois caracteres+\0)]
char matriz[i+1][j+1][3];

//PADRAO DO MAPA
for (int y = 0; y <= i; y++)// <= para incluir +1 da linha/coluna extra de cabeçalho
{
    for (int x = 0; x <= j; x++)
    {
    
     if (y == 0 && x == 0)// Célula superior esquerda vazia 
     {
     matriz[y][x][0] = ' ';
     matriz[y][x][1] = '\0';
     }

     else if (y == 0)//numeros ate j(x) cabeçalho superior
     {
     if(x<10){
     matriz[y][x][0] = '0';  
     matriz[y][x][1] = '0' + x; //'0' para converter em char pois eh uma matriz d strings
     }
     else{
     matriz[y][x][0] = '0' + (x/10);//x/10 pega o 1digito  13/10=1  
     matriz[y][x][1] = '0' + (x%10); //x%10 pega o segundo  13%10=3
     }
     matriz[y][x][2] = '\0'; 
     }

     else if (x == 0)//letras A a i(y)(max T) cabeçalho lateral
     {
     matriz[y][x][0] = 'A' +(i-y) ; //'A' +(I(3)- 1 -Y(0) = C/diminui a soma com passar do y(decresce a cada linha 67C 66B 65A)
     matriz[y][x][1] = '\0';  
     }

     else
     {
     matriz[y][x][0] = '-';
     matriz[y][x][1] = '-';
     matriz[y][x][2] = '\0';
     }

    }
}

//CADEIRAS OCUPADAS
char cadraOcup[5];
while (scanf("%s", cadraOcup) != EOF)
{
int posicaoiy,posicaojx;   
posicaoiy = i - (cadraOcup[0] -'A'); //INVERTER I - (A=65 .: A VIRA ZERO B VIRA 1...)


 if (cadraOcup[1] >= '0' && cadraOcup[1] <= '9' && cadraOcup[2] != '\0') {
            // Caso tenha 2 dígitos
            posicaojx = (cadraOcup[1] - '0') * 10 + (cadraOcup[2] - '0');
        } else {
            // Caso tenha 1 dígito
            posicaojx = cadraOcup[1] - '0';
        }
//posicaojx = cadraOcup[1] - '0' ;//COVERTENDO CHAR P/ INT 0 VIRA 0... 0=48 2=50 50-48=2

matriz[posicaoiy][posicaojx][0] = 'X';
matriz[posicaoiy][posicaojx][1] = 'X';
matriz[posicaoiy][posicaojx][2] = '\0';

}


//IMPRIMINDO MAPA
for (int y = 0; y <= i; y++) // <= para incluir +1 da linha/coluna extra de cabeçalho 
{
    for (int x = 0; x <= j; x++) 
    {
       printf("%s ",matriz[y][x]);
    }
    printf("\n");
}

return 0;
}  