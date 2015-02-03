#include <stdio.h>
#include <stdlib.h>

int f91(int n){
    return (n < 101) ? f91(f91(n+11)): (n-10);
}

int main(int argc, char const *argv[])
{
    int n=0;
    // scanf("%d", &n);
    for(;n<250;n++){
        printf("f91(%d) = %d\n", n, f91(n));
        // scanf("%d", &n);
    }
    return 0;
}
