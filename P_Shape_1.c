#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ster = n-1;
    for(int i = 1 ; i <= n ; i++){
     for(int j = 0 ; j <= ster ; j++){
        printf("*");
     }
     printf("\n");
     ster--;
    }
    return 0;
}