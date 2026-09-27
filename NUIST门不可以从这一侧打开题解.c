#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, x, i;
        int a[1001];
        int cnt[4] = {0, 0, 0, 0};

        scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            cnt[a[i]]++;
        }

        scanf("%d", &x);
        int occupied[1001] = {0};
        int born[4] = {0, 0, 0, 0}; /* 每种门里，至少有一名玩家出生的房间数 */
        int mobile = 0;             /* 能离开出生房、进入大厅的人数 */

        for (i = 0; i < x; i++) {
            int p;
            scanf("%d", &p);
            if (a[p] == 1 || a[p] == 2)
                mobile++;
            if (!occupied[p]) {
                occupied[p] = 1;
                born[a[p]]++;
            }
        }

        int ans = born[0] + born[2] + born[3];
        if (mobile > 0)
            ans += cnt[1];

        int extra3 = cnt[3] - born[3];
        if (extra3 > mobile)
            extra3 = mobile;
        ans += extra3;

        printf("%d\n", ans);
    }
    return 0;
}
	

