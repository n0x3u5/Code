#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t, i;
    char s[27];
    char **st;

    scanf("%d", &t);

    st = (char **)malloc(sizeof(char*)*t);

    for (i=0;i<t;i++)
        st[i] = (char*)malloc(sizeof(char)*(400/26));

    for (i=0;i<t;i++)
        scanf("%s", s[i]);

    for (i=0;i<t;i++)
        printf("%s\n", s[i]);

    return 0;

}
