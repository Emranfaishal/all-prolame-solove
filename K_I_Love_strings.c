#include <stdio.h>
#include <string.h>

int main() {
    char S[100001];
    int freq[26] = {0};
    scanf("%s", S);
    for (int i = 0; S[i] != '\0'; i++) {
        freq[S[i] - 'a']++; 
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
