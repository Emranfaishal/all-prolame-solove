#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int matrix[101][101];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int j = 0; j < b; j++) {
        printf("%d ", matrix[a - 1][j]);
    }
    printf("\n");
    for (int i = 0; i < a; i++) {
        printf("%d ", matrix[i][b - 1]);
    }
    printf("\n");

    return 0;
}
