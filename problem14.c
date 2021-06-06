#include <stdio.h>



int main(){

int a = 0, i;

for(i = 0; i<1000; i++){

if(i % 3 == 0 || i % 5 == 0){

a = a + i;}
}
printf("%d\n", a);

return 0;
}
