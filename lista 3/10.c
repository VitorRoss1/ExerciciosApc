#include <stdio.h>
#include <string.h>
struct tipoMusica
{
char nome[80];//DA MUSICA
int ano;
};

struct tipoBanda
{
   char nome[80];         //nome DA BANDA
   int qtd ;//qtd de musicas
   struct tipoMusica musicas[100]; //vetor do tipo tipomusica criado aq
};


void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda bandas[50],int n){
int flag =0;
//verificaçao
for (int i = 0; i < n; i++)//n num de bandas
{
   for (int j = 0; j < bandas[i].qtd; j++)
   {
     
if (strcmp(pesquisa,bandas[i].musicas[j].nome)==0)
{
  printf("%s : ano %d\n",bandas[i].nome,bandas[i].musicas[j].ano);
   flag = 1;
}
}   
}

if(flag == 0){
printf("Musica nao cadastrada\n"); 
}
   
}



int main() {
    struct tipoBanda bandas[1]; // Criando um vetor de 1 banda posiçao 0

    // Preenchendo a banda[0]
    strcpy(bandas[0].nome, "AC/DC");
    bandas[0].qtd = 3;

    // Preenchendo as músicas corretamente
    strcpy(bandas[0].musicas[0].nome, "thunderstruck");
    bandas[0].musicas[0].ano = 2000;

    strcpy(bandas[0].musicas[1].nome, "back in black");
    bandas[0].musicas[1].ano = 2001;

    strcpy(bandas[0].musicas[2].nome, "highway to hell"); //strcopy para copiar string sem loops
    bandas[0].musicas[2].ano = 2002;

    // Testando a pesquisa
    pesquisarNomeMusica("back in black", bandas, 1);
    pesquisarNomeMusica("thunderstruck", bandas, 1);
    pesquisarNomeMusica("Shine On You Crazy Diamond", bandas, 1);

    return 0;
}