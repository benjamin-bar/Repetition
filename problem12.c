#include <stdio.h>
#include <stdlib.h>


int Mayor(x,y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int x,y,c,mcm;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &c);

    mcm = Mayor(x,y);
    mcm = Mayor(mcm,c);

    while(mcm % x != 0 || mcm % y != 0 || mcm % c != 0)
    {
        mcm++;
    }

    printf("%d",mcm);

    return 0;
}
