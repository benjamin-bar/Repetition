#include <stdio.h>
#include <stdlib.h>
int main() {

int a, b = 1, i;

scanf("%d",&a);

if (a < 0){

return 0;}

else{

for (i = 1 ; i <= a; i++){

b = b * i;
}
}
printf("%d\n" , b);
return 0;
}
