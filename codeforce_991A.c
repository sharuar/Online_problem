#include<stdio.h>
int main()

{
    int A, B, C, N;
    int x, y, z, sum;

    scanf("%d %d %d %d", &A, &B, &C, &N);

        x = A - C;
        y = B - C;
        z = C;

        sum = N - x - y - z;
        if(sum>0 && x>=0 && y>=0 && z>=0)
            printf("%d\n", sum);
        else
            printf("-1\n");

    return 0;
}
