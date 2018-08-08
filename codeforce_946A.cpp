#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b=0, c=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        if(a>0)
            b += a;
        else
            c += a;
    }

    int bc = b - c;
    printf("%d\n", bc);

    return 0;
}
