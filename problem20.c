#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){

int a, b, c, d = 0;

scanf ("%d %d", &a, &b);

srand(time(0));

    for(int i = 0; i < a; i++){

c = rand() % b +1;
d = d + c;

printf("\nDice #%d: %d\n", i+1, c);

	}


printf("\nTotal: %d\n",d);
return 0;
}

