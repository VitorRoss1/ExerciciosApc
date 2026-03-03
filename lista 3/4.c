

double exp_natural(int x, int n){ //0 a 15

double numero = 1.0;
double elev = 1.0;
double fato = 1.0;

for (int i = 1; i <= n; i++)
{
    elev = elev * x;
    fato *= i; //fato = fato * i

    numero += elev/fato;
}

return numero; //num ja eh um entao nao preciso somar +1

}

/*
int main() {
    int x = 2;
    int n = 7;
    printf("Resultado para exp_natural(%d, %d): %.6f\n", x, n, exp_natural(x, n));
    
    x = 3;
    n = 4;
    printf("Resultado para exp_natural(%d, %d): %.6f\n", x, n, exp_natural(x, n));
    
    return 0;
} */