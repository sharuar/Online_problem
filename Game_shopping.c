#include<stdio.h>
int main()
{
    int cost = 0, n, m, i, j, a[1001], c[1001];
    int cnt, result = 0;
    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++)
        scanf("%d", &c[i]);
    for(j=0; j<m; j++)
        scanf("%d", &a[j]);


  for(i = 0, cnt = 0; i < n; i++) {
    if(a[cnt] >= c[i])
        cnt++, result++;
    if(cnt >= m)
      break;
  }

    printf("%d\n", result);

    return 0;
}
