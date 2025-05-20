#include <stdio.h>
void shiftZerosToRight(int a[], int n) {
    int index = 0; // Points to position for next non-zero element

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[index++] = a[i];
        }
    }

    // Fill the rest with zeros
    while (index < n) {
        a[index++] = 0;
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    shiftZerosToRight(a, n);

    return 0;
}
