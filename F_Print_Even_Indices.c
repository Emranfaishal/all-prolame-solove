#include <stdio.h>
void print_even_indices_reversed(int A[], int i) {
    if (i < 0)
        return;
    if (i % 2 == 0){
         printf("%d ", A[i]);
    }
        
    print_even_indices_reversed(A, i - 1);
}
 
int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
 
    print_even_indices_reversed(A, N - 1);
    return 0;
}