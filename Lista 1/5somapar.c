#include <stdio.h>
int main() {

long long int num,zero;
zero = 0;

do {
scanf("%lld",&num );
if (num % 2 == 0){
    zero = num + zero;
} //else{}
}
while(num != 0);
printf("%lld",zero);

return 0;
 }