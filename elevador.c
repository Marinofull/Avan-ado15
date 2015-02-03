#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int l, c, r1, r2, sum, distancia;
    scanf("%d%d%d%d", &l, &c, &r1, &r2);
    while(l){
        distancia = ((l-r2 - r1)*(l-r2 - r1) + (c-r2 - r1)*(c-r2 - r1));
        sum = (r1+r2)*(r1+r2);
        if(sum<distancia)
            printf("S\n");
        else
            printf("N\n");
        scanf("%d%d%d%d", &l, &c, &r1, &r2);
    }
    return 0;
}
