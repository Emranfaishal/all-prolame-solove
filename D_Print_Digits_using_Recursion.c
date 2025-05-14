#include<stdio.h>
void res(int n){
    if(n==0){
        return;
    }
    int lest_num=n%10;
    res(n/10);
    printf("%d ",lest_num);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        if(n==0){
            printf("0");
        }
        res(n);
        printf("\n");
    }
    return 0;
}
