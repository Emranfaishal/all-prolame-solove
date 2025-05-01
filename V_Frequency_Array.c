#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);
    int freq[M];
    for (int i = 0; i < M; i++) {
        freq[i] = 0; 
    }
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        freq[num - 1]++; 
    }
    for (int i = 0; i < M; i++) {
        printf("%d\n", freq[i]);
    }

    return 0;
}

