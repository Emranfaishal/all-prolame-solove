#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        long long int m;
        int a,b,c;
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        // printf("%lld %d %d %d\n",m,a,b,c);
        // printf("%lld\n",m);
        // printf("%d %d %d\n",a,b,c);
        int product = a *b *c;
        if(product==0){
            if(m==0){
                printf("0\n");
            }else{
                printf("-1\n");
            }
        }
        else{
            if(m%product==0){
                printf("%lld\n",m/product);
            }
            else{
                printf("-1\n");
            }
        }
        // long long int result=m/product;
        // printf("%d\n",result);
        
    }
    return 0;
}