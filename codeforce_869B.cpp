#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;
int main()
{
    llu a, b, res, i;

    scanf("%llu %llu", &a, &b);
    res = 1;
    for(i=a+1; i<=b; i++)
    {
       res = (res%10) * (i%10);
       if(res%10 == 0)break;
    }

    printf("%llu", res%10);

    return 0;
}
