#include <stdio.h>
int num(int n){
     if (n >= 4 && n% 2 == 0){
        printf("YES\n");
     }
    
    else{
         printf("NO\n");
    }

}

int main() {
    int n;
    scanf("%d", &n);
    num(n);

    return 0;
}
