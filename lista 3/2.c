#include <stdio.h>

int faz_conta_direito(int parcelas ,char op){
    int soma, result = 0;
    if (op == '+')
    {
        for (int i = 0; i < parcelas; i++)
        {
        scanf("%d",&soma);
        result = soma + result;
        }
    }
    else if(op == '-')
    {
      //result = soma ;
    for (int i = 0; i < parcelas; i++)
    { //INT I = 1
      if (i == 0)
      {
        scanf("%d",&soma);
        result = soma ;
      }
      else{scanf("%d",&soma);
        result = result - soma;}
    }
    }
    
    return result;
}

/*
int main(){
int parcelas;
char op;
scanf("%d %c", &parcelas, &op); //ESPACO ANTES %C POIS DESSE MODO UM \N(ENTER) EH IGNORADO
//printf("%d\n",faz_conta_direito(parcelas,op));
faz_conta_direito(parcelas,op); //CHAMA A FUNÇAO
return 0;
} */