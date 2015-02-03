#include <stdio.h>

void swap(int *a, int *b){
    if(a!=b){
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}


int main(int argc, char const *argv[])
{
    int xm, ym, xr, yr, d;
    scanf("%d%d%d%d", &xm, &ym, &xr, &yr);
    if(xm>xr) swap(&xm, &xr);
        d=xr-xm;

    if(ym>yr) swap(&ym, &yr);
        d+=yr-ym;

    printf("%d\n", d);
    return 0;
}
