#include <stdio.h>
long long recursive_sum(int a[], int n) {
    if (n == 0)
        return 0;
    return a[n - 1] + recursive_sum(a, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[1005]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long result = recursive_sum(a, n);
    printf("%lld\n", result);

    return 0;
}
