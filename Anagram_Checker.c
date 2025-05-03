#include <stdio.h>

int main()
{
    char word1[101], word2[101];
    int count1[26] = {0}, count2[26] = {0};
    scanf("%s %s", word1, word2);
    if (strlen(word1) != strlen(word2))
    {
        printf("No\n");
        return 0;
    }
    for (int i = 0; word1[i] != '\0'; i++)
    {
        count1[word1[i] - 'a']++;
        count2[word2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
