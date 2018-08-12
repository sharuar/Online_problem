#include<stdio.h>
int main()
{

    int n, a[1001], i;
    int j = 0, store[1001];

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(i>0)
        {
            if(a[i]<=a[i-1])
            {
                store[j++] = a[i-1];
            }
            if(i==n-1){
                store[j++] = a[i];
            }
        }
        if(n==1){
                store[j++] = a[i];
            }
    }

    printf("%d\n", j);
    for(i=0; i<j; i++)
        printf("%d ", store[i]);

    printf("\n");

    return 0;
}
