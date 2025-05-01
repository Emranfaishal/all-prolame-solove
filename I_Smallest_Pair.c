#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int min_sum = 2000000000;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int current = A[i] + A[j] + (j - i);
                if (current < min_sum) {
                    min_sum = current;
                }
            }
        }

        printf("%d\n", min_sum);
    }

    return 0;
}
