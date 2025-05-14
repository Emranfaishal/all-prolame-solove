#include<stdio.h>
long long int res(int n){
    if(n==1){
        return 1;
    }
     long long int vall= res(n-1);
     long long int mut =n*vall;
     return mut;
}
int main(){
    int n;
    scanf("%d",&n);
    long long int ans= res(n);
    printf("%lld",ans);
    return 0;
}

