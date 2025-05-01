#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i = 1; i <= n ;i++){
        int t;
        scanf("%d",&t);
        // if(t==0){
        //     printf("0\n");
        // }
        do{
         printf("%d ",t%10);
         t /=10;
        } while(t != 0);
        printf(" \n");
    }
    return 0;
}