#include <stdio.h>
#include <math.h>

int main (){


int a, b = 0, i = 0, c;

scanf("%d", &a);

while (a > 0){

c = a % 10;
a = a/10;
b = b + c * pow(2, i);
i++;

}

printf("%d\n", b);
return 0;
}



