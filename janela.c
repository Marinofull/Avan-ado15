#include <stdio.h>
#include <stdlib.h>

#define WIDTH 200
#define MAX 600
#define HEIGHT 100

// #ifndef SYMBOL
// #define SYMBOL value
// #endif


int main(int argc, char const *argv[])
{
    int f1, f2, f3, v[MAX], i, sum=0;

    scanf("%d%d%d", &f1, &f2, &f3);

    for (i = 0; i < MAX; ++i)
    {
        v[i]=1;
    }

    for(i=f1; i<f1+WIDTH;i++){
        v[i]=0;
    }

    for(i=f2; i<f2+WIDTH;i++){
        v[i]=0;
    }

    for(i=f3; i<f3+WIDTH;i++){
        v[i]=0;
    }

    for(i=0; i<MAX;i++){
        sum+=v[i];
    }
    printf("%d\n", sum*HEIGHT);

    return 0;
}
