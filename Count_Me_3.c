#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char ch[10001];
        scanf("%s", &ch);
        int len = strlen(ch);
        int upper = 0;
        int lower = 0;
        int dight = 0;

        for (int i = 0; i < len; i++)
        {
            if (isupper(ch[i]))
            {
                upper++;
            }
            else if (islower(ch[i]))
            {
                lower++;
            }
            else if (isdigit(ch[i]))
            {
                dight++;
            }
        }
        printf("%d %d %d\n", upper, lower, dight);
    }
    return 0;
}
