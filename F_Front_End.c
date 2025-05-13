#include <stdio.h>

void print_alternate(int a[], int n) {
    int l = 0, r = n - 1;
    while (l <= r) {
        printf("%d ", a[l]);
        l++;
        if (l <= r) {
            printf("%d ", a[r]);
            r--;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[100005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    print_alternate(a, n);

    return 0;
}
