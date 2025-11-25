#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    scanf("%s", s);
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) {
        freq1[s[i] - 'a']++;
    }

    for (i = 0; t[i] != '\0'; i++) {
        freq2[t[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
