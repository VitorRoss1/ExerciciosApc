#include <stdio.h>

int validaPeso(double pesoKg)
{
if(pesoKg < 0){ return 0;}
else{return 1;}
}

void fazTonelada(double pesoKg){
    double ton = pesoKg / 1000;
    printf("%.4f\n",ton);
}
void fazGrama(double pesoKg){
      double gramas = pesoKg * 1000;
      printf("%.4f\n",gramas);
}

/*void conta(){
double pesoKg;
scanf("%lf", &pesoKg);

int a = validaPeso(pesoKg);
if (a == 1)
{
fazTonelada(pesoKg);
fazGrama(pesoKg);
}
}

int main(){
conta();  //soh conta nao void conta()
return 0;
} */