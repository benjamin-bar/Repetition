#include <stdio.h>


int main (){

float a, b = 1, c = 0;
int i;

scanf("%f", &a);


for (i = 0; i < a; i++){

b = i * 2 + 1;

if (i % 2 == 0){

c = c + (4/b);
}
else {
c = c - (4/b);}

}


printf("%f\n", c);

return 0;
}
