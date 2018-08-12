#include<stdio.h>
int main()
{
    int n, c = 2;
    long long int i, x, y, a[101], d;

    scanf("%d %lli", &n, &d);

    for(i=0; i<n; i++)
    {
        scanf("%lli", &a[i]);
        if(i>0)
        {
            x = a[i-1]+d;
            y= a[i]-d;
            if(x<y)
                c = c+2;
            else if(x == y)
                c++;
        }
    }

    printf("%d\n", c);

    return 0;
}
