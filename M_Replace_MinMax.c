#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = 0;
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
        if (a[i] < a[min])
        {
            min = i;
        }
    }
        int temp = a[max];
        a[max]=a[min];
        a[min]=temp;
        for(int i = 0 ; i <n;i++){
            printf("%d ",a[i]);
        }

        return 0;
    }

