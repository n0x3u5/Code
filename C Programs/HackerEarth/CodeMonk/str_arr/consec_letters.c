# include <stdio.h>
# include <strings.h>

int main() {

    int t, inp_len, i;
    char input[30];

    scanf("%d", &t);

    while (t != 0) {

        scanf("%s", input);
        printf("%c", input[0]);

        inp_len = strlen(input);

        for (i = 1;i < inp_len;i++) {
            if(input[i] != input[i-1]) {
                printf("%c", input[i]);
            }
        }

        printf("\n");

        t--;
    }

    return 0;
}
