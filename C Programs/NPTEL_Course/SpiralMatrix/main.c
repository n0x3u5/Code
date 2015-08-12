#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a[6][6];
    int i, k = 0, l = 0, m=3, n=3, j;
    bool first=true;
    scanf("%d %d",&m, &n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            if(!first)
                printf(" %d", a[k][i]);
            else
            {
                printf("%d", a[k][i]);
                first=false;
            }
        }
        k++;
        for (i = k; i < m; ++i)
            printf(" %d", a[i][n-1]);
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
                printf(" %d", a[m-1][i]);
            m--;
        }
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
                printf(" %d", a[i][l]);
            l++;
        }
    }
    return 0;
}
