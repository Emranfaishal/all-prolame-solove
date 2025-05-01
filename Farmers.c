#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0;i<t;i++){
        int m, n, o;
        scanf("%d %d %d ", &m, &n, &o);
        int a = m * o;
        int b = m + n;
        int c = a / b;
        int d = o - c;
        printf("%d\n", d);
    }
    return 0;
}
