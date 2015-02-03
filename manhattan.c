#include <stdio.h>

#define SWAP(a,b) ((a^=b), (b^=a), (a^=b))

int main(int argc, char const *argv[])
{
    int xm, ym, xr, yr, d;
    scanf("%d%d%d%d", &xm, &ym, &xr, &yr);
    if(xm>xr) SWAP(xm, xr);
        d=xr-xm;

    if(ym>yr) SWAP(ym, yr);
        d+=yr-ym;

    printf("%d\n", d);
    return 0;
}
/*
Maria é uma moradora de Nlogópolis, uma cidade na Nlogônia que tem uma característica muito interessante:
todas as ruas da cidade ou são orientadas no sentido norte-sul ou são orientadas no sentido leste-oeste.
Isso significa que, dadas duas ruas, ou elas são paralelas ou elas são perpendiculares entre si.

Todas as ruas da cidade são de mão dupla e é possível seguir em qualquer direção em um cruzamento.

Agora Maria está atrasada para uma reunião e precisa de sua ajuda.
Dadas as coordenadas iniciais de Maria e da reunião, determine o número mínimo de cruzamentos
que Maria deve atravessar para chegar ao seu destino. Esse número inclui o cruzamento onde ocorrerá
a reunião mas não inclui a posição inicial de Maria.
 */
