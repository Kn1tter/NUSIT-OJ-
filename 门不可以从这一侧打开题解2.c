#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, x, i;
        int a[1001], has[1001] = {0};
        int cnt[4] = {0}, born[4] = {0};
        int mobile = 0;

        scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            cnt[a[i]]++;
        }
        scanf("%d", &x);
        for (i = 0; i < x; i++) {
            int p;
            scanf("%d", &p);
            if (a[p] == 1 || a[p] == 2)
                mobile++;
            if (!has[p]) {
                has[p] = 1;
                born[a[p]]++;
            }
        }

        int total = born[0] + born[2] + born[3];
        if (mobile > 0)
            total += cnt[1];
        int extra = cnt[3] - born[3];
        if (extra > mobile)
            extra = mobile;
        total += extra;
        printf("%d\n", total);
    }
    return 0;
}
