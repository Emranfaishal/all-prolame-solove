#include <stdio.h>

int main()
{
    char ch[100001];
    scanf("%s", &ch);
    int len = strlen(ch);
    int count = 0;
    for (int i = 0; i <len; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            if (ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u')
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}