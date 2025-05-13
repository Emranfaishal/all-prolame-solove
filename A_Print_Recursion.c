#include<stdio.h>
void print(int n){
    for(int i =0;i<n;i++){
        printf("I love Recursion\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}