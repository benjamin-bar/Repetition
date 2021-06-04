#include <stdio.h>


int main (){

int a, b, i = 0;

scanf("%d", &a);


while(a > 0){

b = a % 10;

if (b == 5){

i++;}

a = a / 10;}

printf("%d\n", i);

return 0;
}
