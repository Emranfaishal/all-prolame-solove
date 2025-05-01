#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i< n ; i++){
        scanf("%d",&a[i]);
    }
    int one = 0;
    int two = 0;
    for(int i = 0 ; i < n ; i++){
        int val = a[i];
        if(val % 2 == 0){
            one++;
        }
        else{
            if(val % 3 == 0){
                two++;
            }
        }
    }
    printf("%d %d\n",one ,two);
    return 0;
}
