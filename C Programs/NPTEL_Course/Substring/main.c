#include <stdio.h>
#include <string.h>
int main() {
    char s1[19];
    char s2[19];
    int count,i,k,flag,c,len,m;
    scanf("%s %s", s1, s2);
    len=strlen(s1);
    for(i=0; i<len; i++)
    {
        c=0;
        if (s1[i] == s2[c])
        {
            m = i;
            flag = 0;
            count = 0;
            while(s2[c] != '\0' && flag!=1)
            {
                if (s1[m] == s2[c])
                {
                    m++;
                    c++;
                    count++;
                }
                else
                    flag=1;
            }
            if (flag == 0)
            {
                printf("%d",i);
                k=1;
                break;
            }
        }
    }
    if (k != 1)
        if (flag!=0)
            printf("-1");
    return 0;
}
