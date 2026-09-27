#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, i, big = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            if (a > 1)
                big = 1;
        }
        if (big || n % 2 == 1)
            printf("Riki\n");
        else
            printf("C+\n");
    }
    return 0;
}
