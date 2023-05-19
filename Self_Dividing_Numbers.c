#include <stdio.h>
int main() {
    int l, r,i;
    scanf("%d", &l);
    scanf("%d", &r);
    for (i = l; i <= r; i++) {
        int t = i;
        int isD = 1;
        while (t != 0) {
            int d = t % 10;
            if ((d == 0) || (i % d != 0)) {
                isD = 0;
                break;
            }
            t /= 10;
        }
        if (isD) {
            printf("%d ", i);
        }
    }
    return 0;
}
