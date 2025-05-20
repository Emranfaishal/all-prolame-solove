#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < min) {
            min = a[i];
        }
    }
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min) {
            freq++;
        }
    }
    if (freq % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }

    return 0;
}
