#include <stdio.h>

int main() {
    char x[21];
    char y[21];
    scanf("%s %s", x, y);
    for (int i = 0; x[i] != '\0' || y[i] != '\0'; i++) {
        if (x[i] < y[i]) {
            printf("%s\n", x);
            return 0;
        }
        if (x[i] > y[i]) {
            printf("%s\n", y);
            return 0;
        }
    }
    printf("%s\n", x);

    return 0;
}
