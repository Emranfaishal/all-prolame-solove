#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        sum = sum + A[i];
    }
    if (sum < 0)
    {
        sum = -sum;
    }
    printf("%d", sum);
    return 0;
}