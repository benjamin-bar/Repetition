#include <stdio.h>

int main (){

int a, i, b = 0, c = 0;

for (i = 1; i <= 100; i++){

a = i*i;
b = b + a;
c = i + c;

}

int d = c * c;

d = d - b;

printf("%d\n", d);
return 0;
}
