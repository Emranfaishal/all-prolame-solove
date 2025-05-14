#include <stdio.h>

int find_max(int arr[], int n) {
    if (n == 1){
        return arr[0];
    }
    
    int max_in_rest = find_max(arr, n - 1);
    
    if (arr[n - 1] > max_in_rest)
        {
            return arr[n - 1];
        }
    else{
       return max_in_rest;
    }
        
}

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int result = find_max(array, n);
    printf("%d\n", result);

    return 0;
}