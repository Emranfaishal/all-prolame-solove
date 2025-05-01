#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int one = n % 10;
    int two = n / 10;
    if (one % two == 0 || two % one == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}