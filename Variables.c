#include<stdio.h>
int main(){
    int a;
    long long b;
    float c;
    char d;
    scanf("%d %lld %f %c",&a,&b,&c,&d);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%.2f\n",c);
    printf("%c\n",d);
    return 0;
}