#include <stdio.h>
#include <math.h>

int main (){

int a, i;

scanf("%d", &a);

while ( a % 2 == 0){

printf("2 ");
a = a/2;
}

for (i = 3; i <= sqrt(a); i = i+2){

while ( a % i == 0){

printf("%d ", i);

a = a/i;
}
}
if (a > 2){
printf ("%d ", a);}
 
printf("\n");

return 0;
}
