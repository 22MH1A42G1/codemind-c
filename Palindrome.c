#include <stdio.h>
int main() {
  int n, r = 0, rem, o;
    scanf("%d", &n);
    o = n;
    while (n != 0) {
        rem = n % 10;
        r = r * 10 + rem;
        n /= 10;
    }
    if (o == r){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}