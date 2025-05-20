#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int matrix[101][101];
    int isJ = 1;
    if (a != b)
    {
        printf("NO\n");
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &matrix[i][j]);
            int k = (i == j);
            int l = i + j;
            int m = (a - 1);
            if (k || l == m)
            {
                if (matrix[i][j] != 1)
                {
                    isJ = 0;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    isJ = 0;
                }
            }
        }
    }
    if (isJ)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

