#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ster = 1;
    int specs =n-1;
    for(int a = 1 ; a <= n ; a++){
        for(int b = 1 ; b <=specs;b++){
            printf(" ");
        }
        for(int c = 1 ;c <=ster ;c++ ){
             printf("*");
        }
        printf("\n");
        ster+=2;
        specs--;
    }
    int ster1= 2 * n-1;
    int specs1 = 0;
    for (int i = 1; i <= n; i++)
    {
        for(int k = 1; k<=specs1;k++){
            printf(" ");
        }
        for (int j = 1; j<=ster1; j++)
        {
            printf("*");
        }
        
        printf("\n");
        ster1-=2;
        specs1++;
    }
    
    
    return 0;
} 
