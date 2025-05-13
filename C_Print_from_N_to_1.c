#include <stdio.h>

void hello(int i, int n) {
    if (i > n) {
        return;
    }
    hello(i + 1, n);
    printf("%d", i);
    if (i != 1) {
        printf(" ");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    hello(1, n);
    return 0;
}
