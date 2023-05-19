#include <stdio.h>
int main() {
    int l, r;
    scanf("%d", &l);
    scanf("%d", &r);
    for (int i = l; i <= r; i++) {
        int temp = i;
        int isDivisible = 1;
        
        while (temp != 0) {
            int digit = temp % 10;
            
            if (digit == 0 || i % digit != 0) {
                isDivisible = 0;
                break;
            }
            
            temp /= 10;
        }
        
        if (isDivisible) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
