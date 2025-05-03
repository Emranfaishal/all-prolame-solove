#include <stdio.h>
int main()
{
    char ch[101], str[101];
    scanf("%s", ch);
    strcpy(str, ch);
    int len = strlen(ch);
    char temp = ch[0];
    ch[0] = ch[len - 1];
    ch[len - 1] = temp;
    if (strcmp(ch, str) == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
