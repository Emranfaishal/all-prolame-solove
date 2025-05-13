#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int stars = 1;
    int spaces = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= spaces; k++)
        {
            printf(" ");
        }
        char ch;
        if (i % 2 == 1)
        {
            ch = '#';
        }
        else
        {
            ch = '-';
        }
        for (int j = 1; j <= stars; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
        stars += 2;
        spaces--;
    }
    stars -= 4;
    spaces = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 1; k <= spaces; k++)
        {
            printf(" ");
        }
        char ch;
        if (i % 2 == 1)
        {
            ch = '#';
        }
        else
        {
            ch = '-';
        }
        for (int j = 1; j <= stars; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
        stars -= 2;
        spaces++;
    }

    return 0;
}

