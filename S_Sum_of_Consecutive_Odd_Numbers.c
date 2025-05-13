#include <stdio.h>

int sum_of_odds(int X, int Y) {
    int sum = 0;
    
    // Ensure X is always less than Y for easy iteration
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }
    
    // Start from X+1 and go to Y-1
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {  // Check if the number is odd
            sum += i;
        }
    }
    
    return sum;
}

int main() {
    int T, X, Y;
    
    // Read number of test cases
    scanf("%d", &T);
    
    while (T--) {
        // Read X and Y for each test case
        scanf("%d %d", &X, &Y);
        
        // Call the function and print the result
        printf("%d\n", sum_of_odds(X, Y));
    }
    
    return 0;
}
