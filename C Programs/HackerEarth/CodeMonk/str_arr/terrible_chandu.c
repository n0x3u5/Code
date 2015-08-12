# include <stdio.h>
# include <string.h>
int main() {
    int t, inp_len, i, j;
    char input[30], temp;

    scanf("%d", &t);

    while (t != 0) {

        scanf("%s", input);

        inp_len = strlen(input);
        j = inp_len - 1;

        for(i = 0;i < (inp_len/2);i++) {
            temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            j--;
        }

        printf("%s\n", input);

        t--;
    }

    return 0;
}
