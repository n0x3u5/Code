#include <stdio.h>
int main()
{
    int n, i, j, a[10][10], rd, ld, r, c, max;
    rd=ld=c=max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        r=0;
        ld=ld+a[i][i];
        for(j=0;j<n;j++)
        {
            r=r+a[i][j];
            if(i+j==n-1)
                rd=rd+a[i][j];
        }
        if(r>max)
            max=r;
    }
    if(ld>max)
        max=ld;
    if(rd>max)
        max=rd;
    for(j=0;j<n;j++)
    {
        c=0;
        for(i=0;i<n;i++)
            c=c+a[i][j] ;
        if(c>max)
            max=c;
    }
    printf("%d", max);
    return 0;
}
