#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l, r, a, ans;

    scanf("%d %d %d", &l, &r, &a);
    if((l==0&&a==0)|| (r==0&&a==0))
    {
        ans = 0;
    }

    else if(l<r)
    {
        int x = r-l;
        if(x<=a)
        {
            l += x;
            a -= x;
            if(a>1)
            {
                int y=a/2;
                ans = l+y;
                ans *=2;
            }
            else{
                ans = l*2;
            }

        }
        else{
            l += a;
            ans = l*2;
        }
    }

    else if(l>r)
    {
        int x = l-r;
        if(x<=a)
        {
            r += x;
            a -=x;
            if(a>1)
            {
                int y = a/2;
                ans = r+y;
                ans *=2;
            }
            else
            {
               ans = r*2;
            }

        }

        else{
            r += a;
            ans = r*2;
        }
    }

    else
    {
        int y = a/2;
        ans = l+y;
        ans *=2;
    }

    printf("%d\n", ans);

    return 0;
}
