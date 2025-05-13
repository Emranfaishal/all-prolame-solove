#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int A[100][100];
    int primary_sum = 0, secondary_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);

            if (i == j) {
                primary_sum += A[i][j];
            }
            if (i + j == n - 1) {
                secondary_sum += A[i][j];
            }
        }
    }

    int result = abs(primary_sum - secondary_sum);
    printf("%d\n", result);

    return 0;
}
