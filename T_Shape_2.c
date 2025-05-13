#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int ster = 1;
    int specs = n-1;
    for(int i = 0 ; i < n ; i++){
        for(int k = 1 ; k<=specs;k++){
            printf(" ");
        }
        for(int j = 1 ; j<=ster;j++ ){
            printf("*");
        }
        printf("\n");
        ster+=2;
        specs--;
    }
    return 0;
}