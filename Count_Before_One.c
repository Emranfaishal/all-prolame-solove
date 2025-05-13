#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count_before_one(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            break;
        }
        count++;
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    int array[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int ans = count_before_one(array, n);
    printf("%d\n", ans);
    return 0;
}

