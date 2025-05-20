#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int result = 0;
    while (n > 1) {
        n /= 2;
        result++;
    }

    printf("%d\n", result);
    return 0;
}
