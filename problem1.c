#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


int i, max;

max = atoi(argv[1]);

for (i = 1; i < argc; i++){

int v[i];

v[i] = atoi(argv[i]);

if (v[i] > max)
        max = v[i];
}

printf("%d\n", max);

return 0;
}
