#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
int main()
{
    llu n;

    scanf("%llu", &n);
    llu a[n], b[n], sum = 0;


        for(llu i=0; i<n; i++)
        {
            scanf("%llu", &a[i]);
            sum += a[i];
        }

        for(llu k=0; k<n; k++)
        {
            scanf("%llu", &b[k]);
        }

    llu ck=0, mx;
    for(int l=0; l<2; l++)
    {
         mx = b[l];
     for(llu j=l; j<n; j++)
      {
          if(mx < b[j])
          {
              mx = b[j];
              ck = j;
          }
      }

    llu tmp = b[ck];
    b[ck] = b[l];
    b[l] = tmp;

    }

    llu v = b[0] + b[1];
    if(sum <= v)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
