# include <stdio.h>
# include <stdlib.h>
void fall_finder(int, int, int, int, int, int);
int tn = 0;
int main() {
    int f, b, fd, bd, t, n, pos = 0;

    scanf("%d", &n);

    while (n != 0) {

        scanf("%d", &f);
        scanf("%d", &b);
        scanf("%d", &t);
        scanf("%d", &fd);
        scanf("%d", &bd);

        fall_finder(pos, f, b, t, fd, bd);

        n--;
    }

    return 0;
}

void fall_finder(int pos, int f, int b, int t, int fd, int bd) {
    b = 0 - b;
    bd = 0 - bd;

    if (f == (0 - b)) {
        if (f >= fd) {
            tn = tn + (t * fd);
            printf("%d F\n", tn);
            return;
        } else if (b >= bd) {
            tn = tn + (t * bd);
            printf("%d B\n", tn);
            return;
        } else {
            printf("No ditch\n");
            return;
        }
    } else if((pos + f) >= fd) {
        tn = tn + (t * fd);
        printf("%d F\n", tn);
        return;
    } else if((pos + (f + b)) <= bd) {
        tn = tn + (t * (fd + bd));
        printf("%d B\n", tn);
        return;
    } else {
        pos = pos + f + b;
        b = 0 - b;
        bd = 0 - bd;
        tn = tn + (t * f) + (t * b);
        fall_finder(pos, f, b, t, fd, bd);
    }
}
