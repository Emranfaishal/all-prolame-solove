#include <stdio.h>

int main() {
    int N, sum = 0;
    char digits[1000001]; 

    scanf("%d", &N);      
    scanf("%s", digits);  

    for (int i = 0; i < N; i++) {
        sum += digits[i] - '0'; 
    }

    printf("%d\n", sum); 

    return 0;
}
