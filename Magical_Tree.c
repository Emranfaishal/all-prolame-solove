#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    // fist line 
    int lines = n + 5 - (n - 1) / 2;
    int ster = 1;
    int specs = lines - 1;
    for (int i = 0; i < lines; i++) {
        for (int k = 0; k < specs; k++) {
            printf(" ");
        }
        for (int j = 0; j < ster; j++) {
            printf("*");
        }
        printf("\n");
        ster += 2;
        specs--;
    }
    // second line 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n+5-n; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        } 
        printf("\n");
    }
    return 0;
}