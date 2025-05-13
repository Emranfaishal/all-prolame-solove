#include <stdio.h>
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int T, N;
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d", &N);
        printf("%llu\n", factorial(N));
    }
    
    return 0;
}
