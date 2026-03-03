#include <stdio.h>
int main() {
int Ntermos;
long long int zero,x;

scanf("%d", &Ntermos);

zero = 0;
for (int i = 0; i < Ntermos; i++)
{ 
  scanf("%lld", &x);
  zero = x + zero;
}
printf("%lld",zero);


return 0;
 }
