#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int a[1001];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%lli", &a[i]);
        if(a[i]%2 == 0)
        {
            a[i] = a[i] -1;
        }
    }

    for(int i=0; i<n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
