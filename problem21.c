#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float a, x, y, c, d;

int i, inside = 0, outside = 0;

scanf ("%f", &a);

srand(time(0));

    for(i = 0; i <= a; i++){


x = rand() / (double)RAND_MAX;
y = rand() / (double)RAND_MAX;


c = sqrt(x*x+y*y);


if(c <= 1){

inside = inside + 1;}

}


d = 4 * inside/a;

printf("%f\n", d);

return 0;
}
