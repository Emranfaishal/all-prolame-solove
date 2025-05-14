#include <stdio.h>
long long recursive_sum(int a[], int n) {
    if (n == 0)
        return 0;
    return a[n - 1] + recursive_sum(a, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[1005]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long result = recursive_sum(a, n);
    printf("%lld\n", result);

    return 0;
}
// #include <stdio.h>
// long long int recursive_sum(int array[], int n) {
//     if (n == 0){
//         return 0;
//     }
//     long long int sum1 = array[n - 1];
//     long long int sum2 = recursive_sum(array, n - 1);
//     return sum1 + sum2;
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]); 
//     }
//     long long int ans = recursive_sum(array, n);
//     printf("%lld\n", ans);
//     return 0;
// }
