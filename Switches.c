#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++) {
        s[i] = 0; 
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i - 1; j < n; j += i) {
            s[j] = !s[j]; 
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i]) {
            c++;
        }
    }
    printf("%d
", c);
    return 0;
}