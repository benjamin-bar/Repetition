#include <stdio.h>


int main(){


int a, b, c;

scanf("%d",&c);


for(a = 1; a <= c; a++){

for(b = a; b <= c; b++){

printf(" ");
}

for(b = 1; b <= ((2 * a) - 1); ++b){

printf("*");
}

printf("\n");
}
return 0;
}
