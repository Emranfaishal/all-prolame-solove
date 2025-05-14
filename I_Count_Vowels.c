#include <stdio.h>
int res(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int cut = res(s, i + 1);
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return cut + 1;
    }
    else
    {
        return cut;
    }
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int ans = res(0, s);
    printf("%d", ans);
    return 0;
}

