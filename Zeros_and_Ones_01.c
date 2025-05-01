#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum1= 0;
    int sum2 = 0;
    for(int i = 1 ; i <= n; i++){
        int num;
        scanf("%d",&num);
        if(num==0){
            sum1++;
        }
        else{
            sum2++;
        }
    }
    printf("%d %d\n",sum1,sum2);
    return 0;
}