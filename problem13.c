#include <stdio.h>

int main(){

int a, b, i;

scanf("%d", &a);

for(i = a; i >= 1; i--){

for(b = a; b > i; b--){

printf("%d", b);
}

for(b = 1; b <= (i * 2 - 1); b++){

printf("%d", i);
}

for(b = i + 1; b <= a; b++){

printf("%d", b);
}

printf("\n");
}

for(i = 1; i < a; i++){

for(b = a; b > i; b--){

printf("%d", b);
}

for(b = 1; b <= (i * 2 - 1); b++){

printf("%d", i+1);
}

for(b = i + 1 ; b <= a; b++){

printf("%d", b);
}

printf("\n");
}

return 0;
}
