#include <stdio.h>
int main()
{
    char ch[10001];
    scanf("%s", &ch);
    int len = strlen(ch);
    int freq[50] = {0};
    for (int i = 0; i < len; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
            freq[ch[i] - 'a']++;
    }
    for (int i = 0; i < 50; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }
    return 0;
}