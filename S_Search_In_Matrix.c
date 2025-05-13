#include <stdio.h>

int main() {
    int n, m, found = 0;
    scanf("%d %d", &n, &m);
    int A[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n && !found; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == x) {
                found = 1;
                break;
            }
        }
    }
    if (found) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }

    return 0;
}
