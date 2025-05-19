
#include <stdio.h>

void find_winner(unsigned long long a, unsigned long long b, unsigned long long k) {
    int a_div = (a % k == 0);
    int b_div = (b % k == 0);

    if (a_div && b_div) {
        printf("Both\n");
    } else if (a_div) {
        printf("Memo\n");
    } else if (b_div) {
        printf("Momo\n");
    } else {
        printf("No One\n");
    }
}

int main() {
    unsigned long long a, b, k;
    scanf("%llu %llu %llu", &a, &b, &k);

    find_winner(a, b, k);

    return 0;
}
// #include<stdio.h>
// void Momo_both(int n){
//     if(n==0){
//         printf("0");
//     }
// if(n%2==1){
//         printf("Memo");
//     }
//     else{
//         printf("Both");
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     Momo_both(n);
//     return 0;
// }