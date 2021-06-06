#include <stdio.h>



int main() {

int a = 0, b = 1, c = 0;

while (c < 4000000) {

a = b;
b = c;
c = a + b;
}

printf("%d\n", b);

return 0;

}
