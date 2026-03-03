#include <stdio.h>
#include <math.h>

struct tipoPonto
{
   int x;
   int y;
}pa,pb;
//ou struct tipoPonto pa,pb;
 

double distancia(struct tipoPonto pa, struct tipoPonto pb){
double dist = sqrt((pb.x - pa.x)*(pb.x - pa.x) + (pb.y - pa.y)*(pb.y - pa.y));

    return dist;
}
