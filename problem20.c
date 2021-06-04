#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){

int a, b;

scanf ("%d %d", &a, &b);

srand(time(0));

    for(int i = 0; i < a; i++){

printf("\nDice #%d: %d\n", i+1, rand() % b + 1);}

return 0;
}

