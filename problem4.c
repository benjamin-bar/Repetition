#include <stdio.h>

int main (){

int a, b, c = 0, i;
scanf("%d", &a);

for(i = 1; i <= a; i++){

scanf("%d", &b);

b = b + c;
c = b;
}
printf("%d\n", b);
return 0;
}
