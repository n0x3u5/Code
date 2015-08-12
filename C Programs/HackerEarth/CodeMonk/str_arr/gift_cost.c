# include <stdio.h>
int main() {
    int flag, t, n, i, start;
    long x, sum;

    scanf("%d", &t);

    while (t != 0) {
        flag = sum = start = 0;

        scanf("%d", &n);
        scanf("%ld", &x);

        int cost[x];

        for (i = 0;i < n;i++) {
            scanf("%d", &cost[i]);
        }

        sum = cost[0];

        for (i = 1;i < n;i++) {
            while (sum > x) {
                sum -= cost[start];
                start ++;
            }

            if(sum == x) {
                flag = 1;
                break;
            }

            sum += cost[i];
        }

        while (sum > x) {
            sum -= cost[start];
            start ++;
        }

        if(sum == x) {
            flag = 1;
        }

        if(flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

        t --;
    }
}
