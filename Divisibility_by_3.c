#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf(" %c", &ch);
        sum += ch - '0'; 
    }
    if(sum%3==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}