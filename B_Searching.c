#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    int sum;
    scanf("%d",&sum);
    int val =-1;
    for(int i = 0 ; i < n ; i++){
        if(a[i]==sum){
            val = i;
            break;
        }
    }
    printf("%d",val);
    
    return 0;
}