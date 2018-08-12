#include<stdio.h>
int g = 0;
int main()
{
    int i, r = 0, x, n, m;

    scanf("%d %d", &n, &m);

    r = 0;
    for(i=0; i<n; i++){
        scanf("%d", &x);
        r += x;
        printf("%d ", r/m);
        r = r%m;
    }
    printf("\n");

    return 0;
}
