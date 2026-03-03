#include <stdio.h>
int main() {

long long int num,zero,zero2;
zero = 0;
zero2 = 0;

do {
scanf("%lld",&num );
if (num % 2 == 0){
    zero = num + zero;
} else{zero2 = num + zero2;}
}
while(num != 0);
printf("%lld %lld",zero,zero2);

return 0;
 }